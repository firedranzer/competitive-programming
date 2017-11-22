#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin>>n;
    int A[1000];
    for(int i=0; i<n; i++){
        cin>>A[i];
        if(A[i]>37){
            if(A[i]%5>2)
            {   A[i] += (5 - (A[i]%5));}
        }
    }
    for(int i=0; i<n; i++){
        cout<<A[i]<<"\n";
    }
    return 0;
}