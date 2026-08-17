class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int cur_ids = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[cur_ids] = nums[i];
                cur_ids++;
            }
        }
        for(int i = cur_ids; i < n; i++)
            nums[i] = 0;
    }
};