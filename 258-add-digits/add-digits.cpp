class Solution {
public:
    /*
    Brute force approach
    int sumDigits(int num){
        int sum = 0;
        while(num > 0){
            sum += num%10;
            num = num / 10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(num < 10)
            return num;
    
        int sum = sumDigits(num);
        while(sum >= 10){
            sum = sumDigits(sum);
        }
        return sum;
        
    }
    */

    int addDigits(int num) {
        if(num < 10)
            return num;
        return num % 9 ? num % 9 : 9;        
    }
};