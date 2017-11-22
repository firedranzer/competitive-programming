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
    bool belowSea = false;
    for(int i=0; i<n; i++){
        cin>>ch;
        if(ch=='U')     count++;
        if(ch=='D')     count--;
        if(count==0)    valley++;
        if(!belowSea && count < 0)
            {
                valley++;
                belowSea = true;
            }
            
            if(count >= 0)
                belowSea = false;
    }
    cout<<valley;
    return 0;
}
