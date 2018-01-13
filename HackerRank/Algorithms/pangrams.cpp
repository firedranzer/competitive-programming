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
    for(int i=0; i<s.length(); i++){
        int x = tolower(s[i]);
        if(isalpha(s[i])){
            a[x-97]++;
        }
    }

    for(int i=0; i<26; i++){
        if(a[i]>0){
            count++;
        }
    }
    if(count==26){
        cout<<"pangram";
    }
    else{
        cout<<"not pangram";
    }
    return 0;
}
