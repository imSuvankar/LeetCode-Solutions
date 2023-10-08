class Solution {
public:
    int divide(int dividend, int divisor) {

        // edgeCases
        if(dividend == INT_MIN) {
            if (divisor == 1) return INT_MIN;
            else if(divisor == -1) return INT_MAX;
        }
        if(dividend == INT_MAX) {
            if(divisor == 1) return INT_MAX;
            else if(divisor == -1) return -INT_MAX;
        }


        bool sign = (0 < dividend && divisor < 0) || (0 < divisor && dividend < 0) ? false : true;
        int ans = 0;

        dividend = abs(dividend);
        divisor = abs(divisor);

        int start = 0;
        int end = dividend;
        int mid = start + (end - start) / 2;

        while(start <= end) {
            if(dividend / divisor == mid) return sign ? mid : -mid;
            else if(dividend / divisor < mid) end = mid - 1;
            else{
                ans = mid;
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }

        return sign ? mid : -mid;
    }
};