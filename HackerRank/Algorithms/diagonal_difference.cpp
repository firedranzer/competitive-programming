#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int A[1000][1000];
    int sumd1 = 0;
    int sumd2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        
        if(i==j){
            sumd1 += A[i][j];
        }
        if(i+j==n-1){
            sumd2 += A[i][j]; 
        }
        }
    }
    int sum = sumd1 - sumd2;
    if(sum < 0){
        sum = sum * -1;
    }
    cout<<sum;
    return 0;
}