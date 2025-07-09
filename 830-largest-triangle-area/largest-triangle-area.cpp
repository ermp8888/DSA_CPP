class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double triangleArea = 0.0f;
        for(auto& p0 : points){
            for(auto& p1 : points){
                for(auto& p2 : points){
                    double tmpArea = (p0[0]*p1[1] + p1[0]*p2[1] + p2[0]*p0[1]
                    - p1[0]*p0[1] - p2[0]*p1[1] - p0[0]*p2[1]);
                    if(tmpArea > triangleArea)
                        triangleArea = tmpArea;
                }
            }
        }
        return 0.5*triangleArea;
    }
};