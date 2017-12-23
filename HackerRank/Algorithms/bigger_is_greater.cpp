#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string ch;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ch;
        bool check = next_permutation(ch.begin(), ch.end());
        if(check==false){ cout<<"no answer"<<endl;}
        else    cout<<ch<<endl;
    }
    return 0;
}
