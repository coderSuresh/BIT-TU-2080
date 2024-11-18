#include<iostream>
using namespace std;

class Gram {
    int weight;
    public:
        Gram(int w) {
            weight = w * 1000; //receive kg and convert to gram
        }
        
        void print() {
            cout<<"Weight = "<<weight<<endl;
        }
};

class Kg {
    int weight;
    public:
        Kg(int w) {
            weight = w;
        }
        
        operator Gram() {
            return weight;
        }
};

int main() {
    
    Kg k(5);
    Gram g = k;
    g.print();
    
    return 0;
}

