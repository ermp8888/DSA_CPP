class Solution {
public:
    /*
        Using XOR operation
        int missingNumber(vector<int>& nums) {
            int xor1 = 0, xor2 = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                xor1 ^= i;
                xor2 ^= nums[i];
            }
            xor1 ^= n;
            return xor1 ^ xor2;
        }
    */
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = (n*(n + 1)) / 2;
        int arrSum = 0;
        for(int i : nums){
            arrSum += i;
        }
        return totalSum - arrSum;
        
    }
};