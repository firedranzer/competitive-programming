#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    int A[10000];
    while(t--){
        int n; cin>>n;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        int min=A[0];
        int max=A[0];
        int temp;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(A[i]>A[j]){
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        cout<<A[n-1]-A[0]<<endl;
    }
    return 0;
}
