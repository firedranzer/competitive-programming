#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<string> s;
    int n;
    string ch;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ch;
        s.pushback(ch);
        string s2 = next_permutation(s.begin(), s.end());
        if(ch==s2){ cout<<"no answer"<<endl;}
        else    cout<<"s2"<<endl;
    }
    return 0;
}
