#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    string S;
    cin>>n;
    cin>>S;
    cin>>k;
    for(int i=0; i<n; i++){
        int c = S[i];
        c = char((int(c)+k)%26);
        S[i] = c;
    }
    return 0;
}
