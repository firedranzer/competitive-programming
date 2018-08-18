//https://www.interviewbit.com/problems/longest-common-prefix/

string commonPrefixUtil(string str1, string str2)
{
    string result = "";
    
    for(int i=0; i<min(str1.size(), str2.size()); i++){
        if(str1[i]==str2[i]){
            result += str1[i];
        }else   return result;
    }
}

string Solution::longestCommonPrefix(vector<string> &A) {
    string prefix =  A[0];
 
    for (int i=1; i<A.size(); i++)
        prefix = commonPrefixUtil(prefix, A[i]);
 
    return (prefix);
}
