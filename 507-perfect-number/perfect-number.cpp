class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num < 0 || num == 1) return false;

        int divSum = 1, i = 2;
        while( i <= sqrt(num)){
            if(num % i == 0){
                divSum += i;
                if(num / i != i)
                    divSum += (num / i);
            }
            i++;
        }
        return (divSum == num) ? true : false;
    }
};