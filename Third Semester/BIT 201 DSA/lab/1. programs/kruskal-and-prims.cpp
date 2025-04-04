#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 4  // Number of vertices
#define INF INT_MAX

// ---------------------- Prim's Algorithm ----------------------
void primMST(int graph[V][V]) {
    int parent[V], key[V], mstSet[V];

    // Initialize all key values to INF and mstSet[] to false
    for (int i = 0; i < V; i++) {
        key[i] = INF;
        mstSet[i] = 0;
    }

    key[0] = 0;  // Start from vertex A (0th index)
    parent[0] = -1;

    // Find the MST (V - 1) edges
    for (int count = 0; count < V - 1; count++) {
        int u, min = INF;

        // Find the vertex with the minimum key value that is not yet included in MST
        for (int v = 0; v < V; v++)
            if (!mstSet[v] && key[v] < min)
                min = key[v], u = v;

        mstSet[u] = 1;  // Include this vertex in MST

        // Update key values of the adjacent vertices of the selected vertex
        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    // Print the MST edges
    printf("Prim's MST Edges:\n");
    for (int i = 1; i < V; i++)
        printf("%c - %c (Weight %d)\n", parent[i] + 'A', i + 'A', graph[i][parent[i]]);
}

// ---------------------- Kruskal's Algorithm ----------------------
struct Edge {
    int src, dest, weight;
};

struct subset {
    int parent, rank;
};

int find(struct subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(struct subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else {
        subsets[yroot].parent = xroot;
        if (subsets[xroot].rank == subsets[yroot].rank)
            subsets[xroot].rank++;
    }
}

int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

void kruskalMST(struct Edge edges[], int E) {
    qsort(edges, E, sizeof(edges[0]), compare);

    struct subset* subsets = (struct subset*)malloc(V * sizeof(struct subset));
    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    struct Edge result[V];
    int e = 0, i = 0;

    while (e < V - 1 && i < E) {
        struct Edge next = edges[i++];
        int x = find(subsets, next.src);
        int y = find(subsets, next.dest);

        if (x != y) {
            result[e++] = next;
            Union(subsets, x, y);
        }
    }

    // Print the MST edges
    printf("\nKruskal's MST Edges:\n");
    for (i = 0; i < e; i++)
        printf("%c - %c (Weight %d)\n", result[i].src + 'A', result[i].dest + 'A', result[i].weight);
}

int main() {
    // Adjacency matrix for Prim's Algorithm
    int graph[V][V] = {
        {0, 1, 4, INF},  // A
        {1, 0, 2, 3},    // B
        {4, 2, 0, 5},    // C
        {INF, 3, 5, 0}   // D
    };

    // Edge list for Kruskal's Algorithm
    struct Edge edges[] = {
        {0, 1, 1}, {0, 2, 4}, {1, 2, 2}, {2, 3, 5}, {1, 3, 3}
    };

    int E = sizeof(edges) / sizeof(edges[0]);

    // Calling Prim's and Kruskal's MST functions
    primMST(graph);
    kruskalMST(edges, E);

    return 0;
}
