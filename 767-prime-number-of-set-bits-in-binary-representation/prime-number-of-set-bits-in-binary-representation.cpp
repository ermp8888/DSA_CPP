class Solution {
public:
    bool isPrime(int num){
        if(num < 2)  return false;
    
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int primeCnt = 0;
        for(int i = left; i <= right; i++){
            int bitCnt = 0;
            int tmp = i;
            while(tmp){
                if(tmp & 1)
                    bitCnt++;
                tmp = tmp >> 1;
                // cout << "I " << i <<endl;
            }
            // cout << "Num: " << i << " " << "Bits: " << bitCnt << " Is prime: " << isPrime(bitCnt) << endl; 
            if(isPrime(bitCnt))
                primeCnt++;
        }
        return primeCnt;
    }
};