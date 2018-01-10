#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    string S, res="";
    cin>>n;
    cin>>S;
    cin>>k;
    for(int i=0; i<n; i++){
        if(isupper(S[i])){
            res += char(int(S[i] + k - 64)%26+64);
            //cout<<S[i];
        }
        if(islower(S[i])){
            res += char(int(S[i] + k - 96)%26+96);
            //cout<<S[i];
        }
        else res=S[i];
    }
    cout<<res;
    return 0;
}
