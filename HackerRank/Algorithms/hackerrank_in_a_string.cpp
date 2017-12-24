#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char A[80]="hackerrank";
    char B[80];
    int pos=0;
    cin>>B;
    int count=0;
    for(int i=0; A[i]!=0; i++){
        int j = pos;
        while(B[j]!=0){
            if(A[i]==B[j]){ 
                count++;
                break;
            }
        }
    }
    if(count<10)    cout<<"NO"<<endl;
    else    cout<<"YES"<<endl;
    return 0;
}
