#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    int count=0;
    cin >> n;
    vector<int> a(n);
    for(auto& e:a){
        cin >> e;
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] == a[a.size()-1]){  
            count++;
        }
    }
    cout<<count;
    return 0;
}