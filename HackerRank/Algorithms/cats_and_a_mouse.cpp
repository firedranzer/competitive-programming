#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int pos_a, pos_b, pos_m;
    int q, da, db;
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>pos_a>>pos_b>>pos_m;
        da = abs(pos_m-pos_a);
        db = abs(pos_m-pos_b);
        if(da>db)   cout<<"Cat B\n";
        else if(da<db)  cout<<"Cat A\n";
        else    cout<<"Mouse C\n";
    }   
    return 0;
}
