#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    string S, res="";
    cin>>n>>S>>k;
    for(int i=0; i<n; i++){
        if(isupper(S[i])){
            res += char(int(S[i] + k - 64)%26+64);
        }
        else if(islower(S[i])){
            res += char(int(S[i] + k - 96)%26+96);
        }
        else res +=S[i];
    }
    cout<<res;
    return 0;
}
