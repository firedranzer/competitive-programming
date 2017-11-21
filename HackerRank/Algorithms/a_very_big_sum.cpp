#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int sum=0;
    int n; cin>>n;
    long long int A[10];
    for(int i=0; i<n; i++){
        cin>>A[i];
        sum += A[i];
    }
    cout<<sum;
    return 0;
}