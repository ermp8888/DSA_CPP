class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;

        int minA = INT_MAX, minB = INT_MAX;
        for(auto i : nums){
            if(i >= maxA){
                maxC = maxB;
                maxB = maxA;
                maxA = i;
            }
            else if(i >= maxB){
                maxC = maxB;
                maxB = i;
            }else if(i >= maxC){
                maxC = i;
            }

            if(i <= minA){
                minB = minA;
                minA = i;
            }else if (i <= minB){
                minB = i;
            }
        }
        return max(maxA*maxB*maxC, maxA*minA*minB);
        
    }
};