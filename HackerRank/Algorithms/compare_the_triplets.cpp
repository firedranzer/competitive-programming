#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int A[3], B[3];
    int sum_a=0;int sum_b=0;
    cin>>A[0]>>A[1]>>A[2];
    cin>>B[0]>>B[1]>>B[2];
    for (int i=0; i<3; i++){
        if(A[i]>B[i])   sum_a++;
        else if(A[i]<B[i])  sum_b++;
    }
    cout<<sum_a<<" "<<sum_b;
    return 0;
}
