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
    int parent;
};

int find(struct subset subsets[], int i)
{
    // Find root and make root as parent of i (path compression)
    if (subsets[i].parent != i) {
        subsets[i].parent = find(subsets, subsets[i].parent);
    }
    return subsets[i].parent;
}

void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    // Attach smaller rank tree under root of high rank tree
    // (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank) {
        subsets[xroot].parent = yroot;
    } else if (subsets[xroot].rank > subsets[yroot].rank){
        subsets[yroot].parent = xroot;
    } else {
    	// If ranks are same, then make one as root and increment its rank by one
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int compare(const void *a, const void *b){
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

    struct Edge mst[V-1];
    mst_size = 0;

    //To Create a Spanning Tree such that all elements have rank 1 and each elements points to itself as parent.
    for(int i=0; i<V; i++){
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }

    for(int i=0; i<E; i++){

        struct Edge minEdge = edge[i];
        int x = find(subsets, minEdge.src-1);
        int y = find(subsets, minEdge.dest-1);

        if(x!=y){
            mst[mst_size++] = minEdge;
            Union(x, y);
        }
        if(mst_size==V-1){
            break;
        }

    }

    int total_weight = 0;
    for(int i = 0; i < V-1; i++) {
    total_weight += mst[i].weight;
    }

    cout<<total_weight;

    return 0;
}
