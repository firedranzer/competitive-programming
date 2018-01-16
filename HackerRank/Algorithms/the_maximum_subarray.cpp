#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, max_current, max_global, max_cur_seq, max_global_seq;
    cin>>t;
    while(t--){
        int sum=0;
        int n;cin>>n;
        long int a[100000];
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
        
        sort(a, a+n, greater<int> ());
        max_cur_seq = max_global_seq = a[0];
        for(int i=1; i<n; i++){
            max_cur_seq = max(a[i], max_cur_seq + a[i]);
            if(max_cur_seq > max_global_seq){
                max_global_seq = max_cur_seq ; 
            }
        }
        
        cout<<max_global<<" ";
        cout<<max_global_seq<<"\n";
    }
    return 0;
}
