//https://www.interviewbit.com/problems/matrix-search/

int bsearch(vector<int> x, int key){
    int low = 0;
    int high = x.size()-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(x[mid]==key){
            return 1;
        }else if(x[mid]<key){
            low = mid+1;
        }else if(key<x[mid]){
            high = mid-1;
        }
    }
    return 0;
}
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    bool status = false;
    for(int i=0; i<A.size(); i++){
        if((A[i][0] <= B) && (A[i][A[0].size()-1] >= B)){
            if(bsearch(A[i], B)){
                status = true;
                return 1;
            }
        }
    }
    if(status == false){
        return 0;
    }
}
