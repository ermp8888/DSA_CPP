class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double triangleArea = 0.0f;
        int n = points.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k = j+1; k < n; k++){
                    double tmpArea = fabs(
                        points[i][0]*(points[j][1] - points[k][1]) +
                        points[j][0]*(points[k][1] - points[i][1]) +
                        points[k][0]*(points[i][1] - points[j][1])
                    ) / 2;
                    triangleArea = max(tmpArea, triangleArea);
                }
            }
        }
        return triangleArea;
    }
};