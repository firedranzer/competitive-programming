//https://www.interviewbit.com/problems/nearest-smaller-element/

vector<int> Solution::prevSmaller(vector<int> &A) {
    // vector<int> res;
    // int min_ele = A[0];
    // res.push_back(-1);
    // for(int i=1; i<A.size(); i++){
    //     if(A[i]>min_ele){
    //         //min_ele = A[i];
    //         res.push_back(min_ele);
    //     }else if(A[i]<=min_ele){
    //         res.push_back(-1);
    //         min_ele = A[i];
    //     }
    // }
    // return res;
    
    int n=A.size();
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&st.top()>=A[i]) st.pop();
        if(!st.empty()) ans[i]=st.top();
        st.push(A[i]);
    }
    return ans;
}
