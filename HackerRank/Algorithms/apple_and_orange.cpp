#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, t, a, b, m, n;
    cin>>s>>t>>a>>b>>m>>n;
    int apple[10000], orange[10000];
    int count_ap=0;int count_or=0;

    for(int i=0; i<m; i++){
        cin>>apple[i];
    }
    for(int i=0; i<n; i++){
        cin>>orange[i];
    }
    int diff1= s-a;
    for(int i=0; i<m; i++){
        if(apple[i]>0&&apple[i]>=diff1){ count_ap++;}
    }
    int diff2= b-t;
    for(int i=0; i<n; i++){
        if(orange[i]<0&&(-1*orange[i])>=diff2){ count_or++;}
    }
    cout<<count_ap<<endl;
    cout<<count_or<<endl;
    return 0;
}
