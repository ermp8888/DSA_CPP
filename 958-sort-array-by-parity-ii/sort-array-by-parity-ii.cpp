class Solution {
public:
   // Time - O(n),Extra Space - O(n)
    // vector<int> sortArrayByParityII(vector<int>& nums) {
    //     vector<int> result(nums.size(), 0);
    //     int even_index = 0;
    //     int odd_index = 1;
    //     for(int element : nums){
    //         if((element & 1) == 0){// even
    //             result[even_index] = element;
    //             even_index += 2;
    //         }else{
    //             result[odd_index] = element;
    //             odd_index += 2;
    //         }
    //     }
    //     return result;
    // }

    // Time - O(n),Extra Space - O(1)
    vector<int> sortArrayByParityII(vector<int>& nums) {

        int even_index = 0;
        int odd_index = 1;
        while(even_index < nums.size() && odd_index < nums.size()){
            while(even_index < nums.size() && (nums[even_index]&1) == 0){
                even_index += 2;
            }
            while(odd_index < nums.size() && (nums[odd_index]&1)){
                odd_index += 2;
            }
            if(even_index < nums.size() && odd_index < nums.size()){
                swap(nums[even_index], nums[odd_index]);
            }
        }
        return nums;
    }
};