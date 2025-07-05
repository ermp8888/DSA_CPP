class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num < 0) return false;
        int divSum = 0, i = 1;
        while( i <= (num / 2)){
            if(num % i == 0)
                divSum += i;
            i++;
        }
        return (divSum == num) ? true : false;
    }
};