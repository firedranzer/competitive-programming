//https://www.interviewbit.com/problems/array-3-pointers/

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int diff = INT_MAX;
    
    int i=0; int j=0; int k=0;
    while(i<A.size() && j<B.size() && k<C.size()){
        int minimum = min(min(A[i], B[j]), C[k]);
        int maximum = max(max(A[i], B[j]), C[k]);
        
        if(maximum - minimum < diff){
            diff = maximum - minimum;
        }
        
        if(diff==0) break;
        else if(A[i]==minimum)   i++;
        else if(B[j]==minimum)   j++;
        else    k++;
    }
    return diff;
}
