//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    //vector<int> temp;
    
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
    A.erase(A.begin() + i+1, A.end());
    //delete(temp.begin());
    return i+1;
}
