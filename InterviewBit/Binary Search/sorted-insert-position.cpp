//https://www.interviewbit.com/problems/sorted-insert-position/#

int bsearch(vector<int> &A,int B){
    int low = 0;
    int mid;
    int high = A.size()-1;
    //To find the position of element if it exist
    while(low<=high){
        mid = (low+high)/2;
        if(A[mid]==B){
            return mid;
        }else if(A[mid]>B){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    //If element not found in the array
    if(B == A[mid]){
            return mid;
        }
    else if(B > A[mid]){
            return mid+1;
    }
    else if(B < A[mid]){
            return mid;
    }
}
int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int result = bsearch(A, B);
    return result;
}
