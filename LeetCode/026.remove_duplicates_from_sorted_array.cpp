class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int i=0;
        if(A.size()==0 || A.size()==1){
            return A.size();
        }
        for(int j=1; j<A.size(); j++){
            if(A[i]!=A[j]){
                A[i+1]=A[j];
                i++;
            }
        }
        return i+1;
    }
};