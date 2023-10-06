class Solution {
public:
    double myPow(double x, int n) {
        
        /*
        // built-in function
        return pow(x, n);
        */

        
        /*
        // normal exponentiation -> TLE (300/306 TCs)
        bool sign = (0 < n) ? true : false;
        n = abs(n);
        double ans = 1;

        while(n--) ans *= x;
        return sign ? ans : 1/ans;
        */


        // fast exponentiation
        double ans = 1;
        bool sign = (0 < n) ? true : false;

        if(n == INT_MIN) {
            ans *= x;
            n++;
        }
        n = abs(n);

        while(n) {
            if(n & 1) ans *= x;
            x *= x;
            n >>= 1;
        }

        return sign ? ans : 1/ans;
    }
};