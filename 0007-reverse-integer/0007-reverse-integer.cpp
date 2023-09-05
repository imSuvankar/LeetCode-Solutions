class Solution {
public:
    int reverse(int x) {
        
        int ans = 0;
        
        while(x) {
            int lastDigit = x % 10;
            
            if(INT_MAX/10 < ans || ans < INT_MIN/10) return 0;
            
            ans = ans*10 + lastDigit;
            x /= 10;
        }
        
        return ans;
    }
};