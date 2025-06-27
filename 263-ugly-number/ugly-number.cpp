class Solution {
public:
    /*
    Brute force approach
    int powerCnt(int n, int div){
        int cnt = 0;
        while(n%div == 0){
            cnt += 1;
            n = n / div;
        }
        return cnt;
    }
    bool isUgly(int n) {
        int a_2 = 0, b_3 = 0, c_5 = 0;

        if(n <= 0)
            return false;
        if(n == 1)
            return true;
        a_2 = powerCnt(n, 2);
        b_3 = powerCnt(n, 3);
        c_5 = powerCnt(n, 5);

        return n == pow(2, a_2)*pow(3, b_3)*pow(5, c_5);
        
    }
    */
    // Optimal approach
    bool isUgly(int n) {
        if (n <=0 ) return false;

        for(int fact : {2,3, 5}){
            while(n%fact == 0){
                n /= fact;
            }
        }
        return n == 1;
        
    }
};