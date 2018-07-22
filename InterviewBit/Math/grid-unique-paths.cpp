//https://www.interviewbit.com/problems/grid-unique-paths/

int Solution::uniquePaths(int A, int B) {
    int mat[A][B];
    
    //Create a new matrix that stores the total paths possible to reach that particular position from top-left corner.
    for(int i=0; i<A; i++){
        for(int j=0; j<B; j++){
            if(i==0 || j==0){
                mat[i][j] = 1;
            }
            else
                mat[i][j] = mat[i-1][j] + mat[i][j-1];
        }
    }
    
    //Total paths to reach from one corner to other
    return mat[A-1][B-1];
}
