#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int i;
    int n = s.length();
    for( i=1, int j=n-i; i<=n/2, j>=n/2; i++, j--){
        int diff_f = (s[i]-s[i-1]);
        int diff_r = (s[j]-s[j-1]);
        if(diff_f!=diff_r){
            break;
        }
    }
    if(i==n/2){ cout<<"Funny";}
    else{   cout<<"Not Funny";}
    return 0;
}
