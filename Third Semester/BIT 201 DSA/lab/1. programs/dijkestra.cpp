#include <stdio.h>
#include <limits.h>

#define V 4 // Number of vertices

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (sptSet[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to implement Dijkstra's algorithm
void dijkstra(int graph[V][V], int src) {
    int dist[V];     // The output array dist[i] holds the shortest distance from src to i
    int sptSet[V];   // sptSet[i] will be 1 if vertex i is included in the shortest path tree

    // Initialize all distances as INFINITE and sptSet[] as 0
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    // Distance from source to itself is always 0
    dist[src] = 0;

    // Find the shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        // Pick the minimum distance vertex from the set of vertices not yet processed
        int u = minDistance(dist, sptSet);
        sptSet[u] = 1;  // Mark the picked vertex as processed

        // Update dist[] values for the adjacent vertices of the picked vertex
        for (int v = 0; v < V; v++) {
            // Update dist[v] if and only if the current vertex is not in sptSet, 
            // there is an edge from u to v, and the total distance through u is smaller than the current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the calculated shortest distances
    printf("Shortest Paths from Source A (vertex 0):\n");
    for (int i = 0; i < V; i++) {
        printf("A to ");
        if (i == 0) printf("A: 0\n");
        else if (i == 1) printf("B: A -> B (Distance = %d)\n", dist[i]);
        else if (i == 2) printf("C: A -> B -> C (Distance = %d)\n", dist[i]);
        else if (i == 3) printf("D: A -> B -> D (Distance = %d)\n", dist[i]);
    }
}

int main() {
    // Graph representation (adjacency matrix)
    int graph[V][V] = {
        {0, 1, 4, 0},  // A
        {1, 0, 2, 3},  // B
        {4, 2, 0, 5},  // C
        {0, 3, 5, 0}   // D
    };

    // Run Dijkstra's algorithm for source vertex 0 (A)
    dijkstra(graph, 0);

    return 0;
}
