#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    for(int i=1; i<=s.length(); i++){
        if(s[i]==s[i-1]){
            s = s.substr(0, i-1) + s.substr(i+1);
            i = 0;
        }
    }
    if(s.length()==0){
        cout<<"Empty String";
    }
    else{
        cout<<s;
    }
    return 0;
}
