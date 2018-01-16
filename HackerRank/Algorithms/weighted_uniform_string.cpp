#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int a[1000];
    int n;
    cin>>s;
    cin>>n;
    a[0] = int(s[0])-96;
    for(int i=1; i<s.length(); i++){
        int x = int(s[i])-96;
        if(s[i]==s[i-1]){
            a[i+1] = a[i] + x;
        }
        else{
            a[i] = x;
        }
    }
    for(int i=0; i<s.length(); i++){
        cout<<a[i];
    }
    for(int i=0; i<n; i++){
        int query;
        cin>>query;
        for(int j=0; j<n; j++){
            if(a[j]==query){
                cout<<"Yes\n";
                break;
            }
            cout<<"No\n";
        }
    }

    return 0;
}
