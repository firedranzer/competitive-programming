#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    std::cin >> n;
    
    vector<int> a(n);
    for(auto& e:a){
        cin >> e;
    }
    
    sort(a.begin(),a.end());
    vector<int> count(n, 1);
    for(int i=0; i< a.size(); i++){
        //count[i] = 0;
        for(int j=i+1; j<a.size(); j++){
            if(abs(a[i]-a[j])<=1){
                count[i]++;
            }
            else
                break;
        }
    }
    
    std::cout << *std::max_element(count.begin(), count.end());
    return 0;
}