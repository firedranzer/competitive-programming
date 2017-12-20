#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> v;
    int A[10000];
    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
            if((A[i]+A[j])%k!=0){
                //count++;
                //if(count==(n-j)){
                    v.push_back(A[i]);
                    v.push_back(A[j]);
                //}
            }
        }
    }
    //for(int i=0; i<v.size(); i++){
    //    cout<<v.at(i)<<endl;
    //}
    std::sort(v.begin(), v.end()); 
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<endl;
    }
    cout<<v.size()<<endl;
    return 0;
}
