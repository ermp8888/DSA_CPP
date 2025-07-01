class Solution {
public:
    string addStrings(string num1, string num2) {
        int lnN1 = num1.size(), lnN2 = num2.size();
        string outputStr = "";
        int carray = 0;
        // int smallLen = lnN1 > lnN2 ? lnN2 : lnN1;

        if(lnN1 >= lnN2){
            for(int i = 0; i < lnN2; i++){
                int sum = (num2[lnN2 - 1 - i] - '0') + (num1[lnN1 - 1 - i] - '0') + carray;
                carray = sum / 10;
                outputStr += to_string(sum % 10);
            }
            
            if(carray == 0){
                for(int i = lnN1 - lnN2 - 1; i >= 0; i--){
                    outputStr += num1[i];
                }
            }else{
                for(int i = lnN1 - lnN2 - 1; i >= 0; i--){
                    int sum = (num1[i] - '0') + carray;
                    carray = sum / 10;
                    outputStr += to_string(sum % 10);
                    // if(carray == 0)
                    //     break;
                }
            }
            if(carray == 1) outputStr += to_string(carray);
        }else{
            for(int i = 0; i < lnN1; i++){
                int sum = (num1[lnN1 - 1 - i] - '0') + (num2[lnN2 - 1 - i] - '0') + carray;
                carray = sum / 10;
                outputStr += to_string(sum % 10);
            }
            if(carray == 0){
                for(int i = lnN2 - lnN1 - 1; i >= 0; i--){
                    outputStr += num2[i];
                }
            }else{
                for(int i = lnN2 - lnN1 - 1; i >= 0; i--){
                    int sum = (num2[i] - '0') + carray;
                    carray = sum / 10;
                    outputStr += to_string(sum % 10);
                    // if(carray == 0)
                    //     break;
                }
            }
            if(carray == 1) outputStr += to_string(carray);
        }
        
        reverse(outputStr.begin(), outputStr.end());
        return outputStr;
    }
};