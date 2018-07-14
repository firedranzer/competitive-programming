int C(int line, int i){
    if(i == 0){
        return 1;
    }
    return C(line, i-1)*(line-i+1)/i;
}

vector<int> Solution::getRow(int A) {
    vector<int> v;

    if(A == 0){
        v.push_back(1);
        return v;
    }
    
    for(int i = 0; i <= A; i++){
        v.push_back(C(A, i));    
    }
    return v;
}
