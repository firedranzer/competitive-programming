#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, i;
    int count=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool cond = true;
        int n = s.length()-1;
        for( i=1; i<s.length(); i++, n--){
            int diff_f = abs(s[i]-s[i-1]);
            int diff_r = abs(s[n]-s[n-1]);
            if(diff_f!=diff_r){
                cond = false;
                break;
            }
        }
        if(cond){ cout<<"Funny\n";}
        else{   cout<<"Not Funny\n";}
    }
    return 0;
}
