#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, n, m;
    int key[1000], usb[1000];
    int sum[1000];
    cin>>s>>n>>m;
    for(int i=0; i<n; i++){
        cin>>key[i];
    }
    for(int i=0; i<m; i++){
        cin>>usb[i];
    }
    sum[0] = key[0] + usb[0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum[i] = key[i]+usb[j];
        }
    }
    int max=sum[0]; 
    for(int i=0; i<n*m; i++){
        if(max<sum[i]&&sum[i]<=s)  max=sum[i];
    }
    if(max>s){  cout<<"-1";}
    else    cout<<max;
    return 0;
}
