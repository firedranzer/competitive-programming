//https://www.interviewbit.com/problems/reverse-string/

string Solution::reverseString(string A) {
    stack<char> temp;
    string result;
    for(auto&a:A){
        temp.push(a);
    }
    while(!temp.empty()){
        result += temp.top();
        temp.pop();
    }
    
    return result;
}
