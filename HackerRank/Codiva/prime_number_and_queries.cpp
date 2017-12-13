#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int array_min[1000005], array_max[1000005];

int main() {
    
    //Sieve of eratosthenes ---- Simple Sieve
    bool  prime[1000005]; 
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<1000005; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<1000005; i += p)
                prime[i] = false;
        }
    }

    // End of Sieve
    // array_min contains smallest prime numbers wrt index.
    array_min[1]=1;
    // array_min contains smallest prime numbers wrt index.
    array_max[1000004]=1000004;

    for(int i=2; i<1000005; i++){
        if(prime[i]){
            array_min[i] = i;
        }
        else{
            array_min[i]=array_min[i-1];
        }
    }

    for(int i=1000004; i>1; i--){
        if(prime[i]){
            array_max[i] = i;
        }
        else{
            array_max[i]=array_max[i+1];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        if(array_min[y]<x || array_max[x]>y){   cout<<"0\n";}
        else{   cout<<array_min[y]-array_max[x]<<"\n";}
    }
}
