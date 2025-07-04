class Solution {
public:
    // Sum of AP series with n elements
    // s = n/2(2xa + (n-1)xd)
    // Find the positive value for n
    // n = (-b + sqrt(b^2 - 4xaxc)) / 2
    int arrangeCoins(int n) {
        long long numComRow = (-1 + sqrt(1LL + 8LL*n)) / 2; 
        return numComRow;
        
    }
};