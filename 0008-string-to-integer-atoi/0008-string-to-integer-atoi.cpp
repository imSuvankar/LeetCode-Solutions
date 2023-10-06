class Solution {
public:
    int myAtoi(string s) {

        int ans = 0;
        bool sign = true;
        int i = 0;

        while(i < s.size() && s[i] == ' ') i++;

        if(i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '+') ? true : false;
            i++;
        }

        while(i < s.size() && isdigit(s[i])) {
            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && s[i] > '7')) {
                return sign ? INT_MAX : INT_MIN;
            }
            ans = ans * 10 + (s[i] - '0');
            i++;
        }

        return sign ? ans : -ans;
    }
};
