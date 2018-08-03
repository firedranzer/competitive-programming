//https://www.interviewbit.com/problems/diffk/

int Solution::diffPossible(vector<int> &A, int B) {
    int i=0;
    int j=1;
    bool status = false;
    // while(i<A.size());{
    //     if(A[j]-A[i]==B){
    //         return 1;
    //         status = true;
    //     }
    //     else if(A[j]-A[i]<B){
    //         j++;
    //     }
    //     else if(A[j]-A[i]>B){
    //         i++;
    //     }else if(i==A.size()-1){
    //         return 0;
    //     }
    // }
    
    for(int i=0; i<A.size(); i++){
        for(int j=i+1; j<A.size(); j++){
            if(A[j]-A[i]==B){
                return 1;
                status = true;
            }
        }
    }
    if(status==false){
        return 0;
    }
}
