//https://www.interviewbit.com/problems/set-matrix-zeros/

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        
    vector<bool> zeroRow(A.size());
    vector<bool> zeroColumn(A[0].size());

    //Finding the rows and columns having any element= 0
    for (int i = 0 ; i < A.size() ;i++){
        for(int j = 0 ; j < A[0].size() ; j++){
            if(A[i][j] == 0){
                zeroRow[i] = true;
                zeroColumn[j] = true;
            }
        }
    }

    //To set the entire row and column to 0
    for (int i = 0 ; i < A.size(); i++){
        for(int j = 0 ; j < A[0].size(); j++){
            if(zeroRow[i] || zeroColumn[j]){
                A[i][j] =0;
            }
        }
    }
}
