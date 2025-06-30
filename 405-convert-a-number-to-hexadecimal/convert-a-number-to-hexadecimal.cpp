class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";

        unsigned int n = num;
        string hexString = "0123456789abcdef";
        string hexNum = "";
        while(n != 0){
            hexNum += hexString[n & 0xF];
            n >>= 4;
        }
        reverse(hexNum.begin(), hexNum.end());
        return hexNum;
        
    }
};