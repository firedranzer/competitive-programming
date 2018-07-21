//https://www.interviewbit.com/problems/prime-numbers/

vector<int> Solution::sieve(int A) {
    vector<int> v;
    vector<int> prime(A+1, 1);
    
    //To set the status of number as prime or not prime
    for(int i=2; i<sqrt(A); i++){
        if(prime[i]==1){
            for(int j = i; i*j<=A; j++){
                prime[i*j]=0;
            }
        }
    }
    
    //To print the prime values
    for(int i=2; i<A; i++){
        if(prime[i]==1){
            v.push_back(i);
        }
    }
    return v;
}
