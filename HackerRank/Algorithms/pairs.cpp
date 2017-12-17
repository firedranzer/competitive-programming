#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    int A[10000];
    int count=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }   
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(A[j]-A[i])==k){   count++;}
        }
    }
    cout<<count;
    return 0;
}
