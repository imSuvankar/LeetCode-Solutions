class Solution {
public:
    int addDigits(int num) {
        
        while(9 < num) {
            int temp = 0;
            
            while(num) {
                int digit = num % 10;
                temp += digit;
                num /= 10;
            }
            num = temp;
        }

        return num;
    }
};