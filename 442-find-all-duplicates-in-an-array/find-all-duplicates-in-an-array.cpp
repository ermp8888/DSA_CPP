class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> occur_cnt;
        vector<int> result;

        for(int num : nums){
            if(occur_cnt.find(num) != occur_cnt.end())
                occur_cnt[num]++;
            else
                occur_cnt[num] = 1;
        }
        for(auto& it : occur_cnt){
            if(it.second > 1)
                result.push_back(it.first);
        }
        return result;
    }
};