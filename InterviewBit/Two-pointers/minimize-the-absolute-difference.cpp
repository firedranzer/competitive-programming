//https://www.interviewbit.com/problems/minimize-the-absolute-difference/

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    
    // O(n^3) solution
    // int i, j, k;
    // int min = INT_MAX;
    // for(i=0; i<A.size(); i++){
    //     for(int j=0; j<B.size(); j++){
    //         for(int k=0; k<C.size(); k++){
    //             int temp = max(max(abs(A[i]-B[j]), abs(B[j]-C[k])), abs(C[k]-A[i]));
    //             if(temp<min){
    //                 min = temp;
    //             }
    //         }
    //     }
    // }
    // return min;
    
    //Optimized Solution: O(n)
    int diff = INT_MAX;
    
    int i=0; int j=0; int k=0;
    while(i<A.size() && j<B.size() && k<C.size()){
        int minimum = min(min(A[i], B[j]), C[k]);
        int maximum = max(max(A[i], B[j]), C[k]);
        
        if(maximum-minimum < diff){
            diff = maximum-minimum;
        }
        
        if(diff==0) break;
        else if(A[i] == minimum)    i++;
        else if(B[j] == minimum)    j++;
        else k++;
    }
    return diff;
}
