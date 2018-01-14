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
        string r = s;
        std::reverse(r.begin(), r.end());
        for( i=0; i<n; i++){
            int diff_f = abs(s[i+1]-s[i]);
            int diff_r = abs(r[i+1]-r[i]);
            if(diff_f==diff_r){
                count++;
            }
        }
        if(count==n-1){ cout<<"Funny\n";}
        else{   cout<<"Not Funny\n";}
    }
    return 0;
}
