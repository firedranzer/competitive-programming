#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int low, high, i, flag, t;
    int k=0;
    int a[10000];
    cin>>t;
    while(t--){
    cin >> low >> high;
    int min=low;
    int max=low;
    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            a[k]=low;
            if(a[k]<min){   min=a[k];}
            if(a[k]>max){   max=a[k];}
            k=k+1;
        }
        

        ++low;
    }
    int diff = max - min;
        cout<<diff<<endl;
    }

    return 0;
}
