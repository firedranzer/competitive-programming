//https://www.interviewbit.com/problems/evaluate-expression/

int Solution::evalRPN(vector<string> &A) {
    stack<int> expr;
    
    for(int i=0; i<A.size(); i++){
        if(A[i]!="+" && A[i]!="-" && A[i]!="*" && A[i]!="/"){
            expr.push(atoi(A[i].c_str()));
        }
        else{
            int first = expr.top();
            expr.pop();
            int second = expr.top();
            expr.pop();
            if(A[i] == "+"){
                expr.push(second+first);
            }
            else if(A[i] == "-"){
                expr.push(second-first);
            }
            else if(A[i] == "*"){
                expr.push(second*first);
            }
            else{
                expr.push(second/first);
            }
        }
    }
    return expr.top();
}
