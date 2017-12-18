#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, max;
    cin>>n;
    int types[6]={0,0,0,0,0,0}, A[10000];
    for(int i=0 ;i<n; i++){
        cin>>A[i];
        types[A[i]] += 1;
    }
    int max = types[0];
    for(int i=0; i<n; i++){
        if(types[i]>max){   max=types[i];}
    }
    cout<<max;
}
