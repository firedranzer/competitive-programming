#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    auto n = s.size();
    int row = round(sqrt(n));
    int column;
    if (row >= sqrt(n)) column = row; else column = row + 1;
    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            if(j*column+i<n){
                cout<<s[j*column+i];
            }
        }
        cout<<' ';
    }
    return 0;
}
