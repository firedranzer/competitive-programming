class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        digits[n] += 1;
        int carry = 0;
        while(n>=0){
            int newsum = digits[n] + carry;
            digits[n] = newsum % 10;
            carry = int(newsum/10);
            n = n-1;
        }
        if(carry>0){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};