#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Edge{
    int src;
    int dest;
    int weight;
};

struct subset{
    int rank;
    int weight;
};

int find(struct subset subsets[], int i)
{
    // Find root and make root as parent of i (path compression)
    if (subsets[i].parent != i) {
        subsets[i].parent = find(subsets, subsets[i].parent);
    }
    return subsets[i].parent;
}



int compare(const void *a const void *b){
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}

int main() {
    int V, E;
    cin>>V>>E;

    struct Edge *edge = (struct Edge*) malloc( E * sizeof(struct Edge));
    for(int i=0; i<E; i++){
        int s, d, w;
        cin>>s>>d>>w;
        edge[i].src = s;
        edge[i].dest = d;
        edge[i].weight = w;
    }

    qsort(edge, E, sizeof(edge[0]), compare);

    struct subset *subsets = (struct subset*) malloc( V * sizeof(struct subset));
    return 0;
}
