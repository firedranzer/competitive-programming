class Solution {
public:
    string common(string s, string prefix){
        string temp = "";
        for(int i=0; i<min(s.length(), prefix.length()); i++){
            if(s[i]==prefix[i]){
                temp += s[i];
            }else   return temp; 
        }
        return temp;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string prefix = strs[0];
        for(int i=1; i<strs.size(); i++){
            if(strs[i]==""){
                return "";
            }
            prefix = common(strs[i], prefix);
        }
        return prefix;
    }
};