//https://www.interviewbit.com/problems/rotated-sorted-array-search/

// Finding Pivot in an average O(logn) time.
int findPivot(const vector<int> &A){
    int start = 0;
    int end = A.size()-1;
    int mid;
    int n = A.size();
    while(start <= end){
        mid = start + (end-start)/2;
        int next = (mid+1)%n;
        int prev = (mid-1+n)%n;
        if(A[start] <= A[end]){
            return start;
        }
        else if((A[mid] <= A[prev]) && (A[mid] <= A[next])){
            return mid;
        }
        else if(A[mid] <= A[end]){
            end = mid-1;
        }
        else{ // A[mid] >= A[start]
            start = mid+1;
        }
    }
    return -1;
}

int bsearch(const vector<int> &A, int low, int high, int key){
    while(low<=high){
        int mid = (low+high)/2;
        if(key==A[mid]){
            return mid;
        }else if(key<A[mid]){
            high = mid-1;
        }else if(key>A[mid]){
            low = mid + 1;
        }
    }
    return -1;
}
int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int pivot = findPivot(A);
    
    if(B == A[pivot]){
        return pivot;
    }
    
    int result = bsearch(A, 0, pivot-1, B);
    
    if(result == -1){
        return bsearch(A, pivot+1, A.size()-1, B);    
    }
    
    return result;
}
