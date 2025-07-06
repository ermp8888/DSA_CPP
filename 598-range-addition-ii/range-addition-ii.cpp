class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty()) return m*n;

        int xMin = m, yMin = n;

        vector<int> xCod;
        vector<int> yCod;
        for(auto& i : ops){
            xCod.push_back(i[0]);
            yCod.push_back(i[1]);
        }
        
        xMin = *min_element(xCod.begin(), xCod.end());
        yMin = *min_element(yCod.begin(), yCod.end());
        return xMin*yMin;
        
    }
};