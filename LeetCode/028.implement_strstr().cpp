class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.length()){
            return 0;
        }
        for(int i=0; i<haystack.length(); i++){
            int n=0;
            while(n<needle.length() && haystack[i+n]==needle[n])  n++;
            if(n == needle.length()){
                return i;
            }
        }
        return -1;
    }
};