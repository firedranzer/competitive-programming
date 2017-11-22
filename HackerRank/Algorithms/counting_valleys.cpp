#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    char ch;
    cin>>n;
    int valley=0;
    int count=0;
    for(int i=0; i<n; i++){
        cin>>ch;
        if(ch=='U')     count++;
        if(ch=='D')     count--;
        if(count==0)    valley++;
    }
    cout<<valley;
    return 0;
}
