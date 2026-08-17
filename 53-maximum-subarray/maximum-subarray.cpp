class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        if(n == 1)
            return nums[0];

        int large_sum = INT_MIN;
        int current_sum = 0;
        for(int num : nums){
            current_sum += num;
            large_sum = max(large_sum, current_sum);
            if(current_sum < 0)
                current_sum = 0;
        }
        return large_sum;
    }
};