class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local_sum = nums[0];
        int global_sum = nums[0];
        if(nums.empty()){
            return 0;
        }
        
        for(int i=1; i<nums.size(); i++){
            local_sum = max(nums[i], local_sum + nums[i]);
            if(local_sum > global_sum){
                global_sum = local_sum;
            }
        }
        return global_sum;
    }
};