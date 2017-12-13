#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    float pos, neg, zero;
    int num[100000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num[i];
        if(num[i]>0){   pos++;}
        else if(num[i]==0){ zero++;}
        else    neg++;
    }
    cout<<(pos/n)<<"\n";
    cout<<(neg/n)<<"\n";
    cout<<(zero/n)<<"\n";
    return 0;
}
