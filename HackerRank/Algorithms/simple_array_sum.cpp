#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, A[10000];
    int sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
        sum += A[i];
    }
    cout<<sum;
    return 0;
}