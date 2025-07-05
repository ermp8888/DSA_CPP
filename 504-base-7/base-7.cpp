class Solution {
public:
    string convertToBase7(int num) {
        string base7Str = "";
        bool isNeg = num < 0;
        num = abs(num);

        if(num == 0) return "0";

        while(num > 0){
            base7Str += to_string(num%7);
            num /= 7;
        }
        reverse(base7Str.begin(), base7Str.end());
        
        return isNeg ? "-" + base7Str : base7Str;
        
    }
};