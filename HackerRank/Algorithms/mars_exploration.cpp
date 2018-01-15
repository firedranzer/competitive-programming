#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count = 0;
    string s, str;
    getline(cin, s);
    int n = s.length()/3;
    for(int i=0; i<n; i++){
        str.append("SOS");
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]!=str[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
