class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int even_index = 0;
        int odd_index = 1;
        for(int element : nums){
            if((element & 1) == 0){// even
                result[even_index] = element;
                even_index += 2;
            }else{
                result[odd_index] = element;
                odd_index += 2;
            }
        }
        return result;
    }
};