class Solution {
public:
    // first check it is power of two and then check set bit should be on even position (index start with 0)
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n-1)) == 0 && (n & 0xAAAAAAAA) == 0;
        
    }
};