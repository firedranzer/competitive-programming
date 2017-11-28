#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int cat_a[100], cat_b[100], mouse[100];
    int q, dist1, dist2;
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>cat_a[i]>>cat_b[i]>>mouse[100];
    }
    for(int i=0; i<q; i++){
        dist1 = mouse[i] - cat_a[i];
        dist2 = mouse[i] - cat_b[i];
        if(dist1<0)     dist1 = -1 * dist1;
        if(dist2<0)     dist2 = -1 * dist2;
        if(dist1==dist2)    cout<<"Mouse C"<<"\n";
        if(dist1>dist2)     cout<<"Cat B"<<"\n";
        else if(dist2>dist1)    cout<<"Cat A"<<"\n";
    }   
    return 0;
}
