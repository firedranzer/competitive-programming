#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string A="hackerrank";
    string B;
    int pos=0;
    cin>>B;
    int count=0;
    for(int i=0; i<B.length(); i++){
        
        if(count <A.length() && B[i]==A[count]){
            count++;
        }
    }
    if(count==10)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}
