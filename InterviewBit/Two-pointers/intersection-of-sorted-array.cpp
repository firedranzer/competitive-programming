//https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> result;
    int i=0; int j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]<B[j]){
            i++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else{//When the two elements are equal
            result.push_back(A[i]);
            i++;
            j++;
        }
    }
    return result;
}
