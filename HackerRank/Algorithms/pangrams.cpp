#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    int a[26];
    int count=0;
    int i;
    for(int i=0; i<s.length(); i++){
        int x = s[i];
        if(x>=65 && x<=90) 
        {   
           a[x-65]++;
        }   
        else if(x>=97 && x<=122)
        {
            a[x-97]++;
        }
    }

    for(int i=0; i<26; i++){
        if(a[i]==0){
            break;
        }
    }
    if(i==26){
        cout<<"pangram";
    }
    else{
        cout<<"not pangram";
    }
    return 0;
}
