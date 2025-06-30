class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        long long fact = 1;
        while(fact * fact <= num){
            if(fact * fact == num)
                return true;
            fact += 1;
        }
        return false;
    }
};