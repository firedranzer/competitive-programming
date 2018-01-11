#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    int x[100000];
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    sort(x, x + n);
    int numOfTransmitters = 0;
    int i = 0;
    while (i < n) {
        numOfTransmitters++;
        int loc = x[i] + k;
        while (i < n && x[i] <= loc) i++;
        loc = x[--i] + k;
        while (i < n && x[i] <= loc) i++;
    }
    cout<<numOfTransmitters;
    return 0;
}
