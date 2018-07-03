#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& e:a){
        cin >> e;
    }
    int min = a[0], max = a[0];
    int countmin = 0, countmax = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i]<min){
            min = a[i];
            countmin++;
        }
        else if(a[i]>max){
            max = a[i];
            countmax++;
        }
    }
    cout << countmax << " " << countmin;
}