class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> v(n, true);
        v[0] = v[1] = false;
        for(int i=2; i<sqrt(n); i++){
            for(int j=i; i*j<=n; j++){
                v[i*j] = false;
            }
        }
        for(int i=0; i<n; i++){
            if(v[i]==true){
                count++;
            }
        }
        return count;
    }
};