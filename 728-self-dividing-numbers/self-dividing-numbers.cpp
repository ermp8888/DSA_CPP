class Solution {
public:
    bool checkSelfDivNum(int num){
        int orgNum = num;
        while(num > 0){
            int dig = num % 10;
            if(dig == 0 || orgNum % dig != 0)
                return false;
            num = num / 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++){
            if(i > 0 && i < 10) 
                result.push_back(i);
            else{
                if(checkSelfDivNum(i))
                    result.push_back(i);
            }
        }
        return result;
    }
};