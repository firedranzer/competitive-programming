#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, i, j;
    int count=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        for( i=1, j=n-i; i<=n/2, j>=n/2; i++, j--){
            int diff_f = (s[i]-s[i-1]);
            int diff_r = (s[j]-s[j-1]);
            if(diff_f==diff_r){
                count++;
            }
        }
        if(count==n/2){ cout<<"Funny\n";}
        else{   cout<<"Not Funny\n";}
    }
    return 0;
}
