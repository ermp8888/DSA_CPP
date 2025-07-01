class Solution {
public:
    string addStrings(string num1, string num2) {
        int l1 = num1.size() - 1, l2 = num2.size() - 1;
        int carray = 0;
        string sumOfNums = "";

        while(l1 >= 0 || l2 >= 0 || carray){
            int d1 = (l1 >= 0) ? num1[l1--] - '0' : 0;
            int d2 = (l2 >= 0) ? num2[l2--] - '0' : 0;

            int sum = d1 + d2 + carray;
            sumOfNums.push_back(sum % 10 + '0');
            carray = sum / 10;
        }
        
        reverse(sumOfNums.begin(), sumOfNums.end());
        return sumOfNums;
    }
};