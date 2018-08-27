class Solution {
public:
    bool isValid(string s) {
        stack<char> result;
        for(auto&a : s){
            if(a=='(' || a=='[' || a=='{'){
                result.push(a);
            }
            else if(!result.empty()){
                if(a==')' && result.top() =='('){
                        result.pop();
                }
                else if(a==']' && result.top() =='['){
                        result.pop();
                }
                else if(a=='}' && result.top() =='{'){
                        result.pop();
                }
                else   return false;
            }else{
                if(a==')' || a==']' || a=='}'){
                    return false;
                }
            }
        }
        if(result.empty()){
            return true;
        }else   return false;
    }
};