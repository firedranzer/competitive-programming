#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int s, t, a, b, m, n;
    cin>>s>>t>>a>>b>>m>>n;
    long int apple, orange;
    int count_ap=0;
    int count_or=0;
    for(long int i=0; i<m; i++){
        cin>>apple;
        //int dist_app = a + apple;
        if(a+apple>=s && a+apple <=t){    count_ap++;}
    }
    for(long int i=0; i<n; i++){
        cin>>orange;
        //int dist_or = b + orange;
        if(b+orange>=s && b+orange <=t){    count_or++;}    
    }
    cout<<count_ap<<endl;
    cout<<count_or<<endl;
    return 0;
}
