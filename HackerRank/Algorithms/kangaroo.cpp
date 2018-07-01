#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(x2>=x1&&v2>v1){
        cout<<"NO";
        exit(0);
    }
    int sum1 = x1;
    int sum2 = x2;
    while(true){
        sum1 += v1;
        sum2 += v2;
        if(sum1==sum2 && ((sum1-x1)/v1 == (sum1 - x2)/v2)){
            cout<<"YES";
            exit(0);
        }
    }
    return 0;
}