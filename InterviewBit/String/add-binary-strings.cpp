//https://www.interviewbit.com/problems/add-binary-strings/

int length(string &a, string &b){
    int len1 = a.size();
    int len2 = b.size();
    if(len1<len2){
        for(int i=0; i<len2-len1; i++){
            a += '0';
        }
        return len2;
    }
    else{
        for(int i=0; i<len1-len2; i++){
            b += '0'; 
        }
    }
    return len1;
}

string Solution::addBinary(string A, string B) {
    string s ;
    int lenstring = length(A, B);
    int carry = 0;
    for(int i=lenstring-1; i>0; i++){
        int firstbit = A.at(i) - '0';
        int secondbit = B.at(i) - '0';
        
        int sum = (firstbit ^ secondbit ^ carry) + '0';
        s = (char)sum + s;
        carry = (firstbit & secondbit) | (secondbit & carry) | (firstbit & carry);
    }
    if (carry)
        s = '1' + s;
    return s;
}
