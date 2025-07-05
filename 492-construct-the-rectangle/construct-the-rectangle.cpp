class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> lenWidth;
        int W = sqrt(area);
        while(area % W != 0){
            W--;
        }
        int L = area / W;
        
     return {L, W};
    }
};