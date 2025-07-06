class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty()) return m*n;

        int xMin = m, yMin = n;

        vector<int> xCod;
        vector<int> yCod;
        for(auto& i : ops){
            xMin = min(xMin, i[0]);
            yMin = min(yMin, i[1]);
        }

        return xMin*yMin;
        
    }
};