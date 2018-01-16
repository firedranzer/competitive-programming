#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, max_current, max_global, sum=0;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[10000];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        max_current = max_global = a[0];
        for(int i=1; i<n; i++){
            max_current = max(a[i], max_current + a[i]);
            if(max_current > max_global){
                max_global = max_current ; 
            }
        }
        for(int i=0;  i<n; i++){
            if(A[i]>0){
                sum += A[i];
            }
        }
        cout<<
        cout<<max_global<<"\n";
    }
    return 0;
}
