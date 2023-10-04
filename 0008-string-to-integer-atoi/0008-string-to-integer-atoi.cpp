class Solution {
public:
    int myAtoi(string s) {

        int ans = 0;
        bool sign = true;
        bool lock = true;

        for(char c : s) {
            if(isalpha(c) || c == '.') break; 

            else if(lock && c == ' ') continue;
            else if(!lock && c == ' ') break;

            else if(lock && (c == '+' || c == '-')) {
                sign = (c == '+') ? true : false;
                lock = false;
            }
            else if(!lock && (c == '+' || c == '-')) break;

            else if(lock && isdigit(c)) {
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && (c-'0') > 7)) {
                    return sign ? INT_MAX : INT_MIN;
                }
                ans = ans * 10 + (c - '0');
                lock = false;
            }
            else if(lock && !isdigit(c)) continue;

            else if(!lock && isdigit(c)) {
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && (c-'0') > 7)) {
                    return sign ? INT_MAX : INT_MIN;
                }                
                ans = ans * 10 + (c - '0');
            }
            else if(!lock && !isdigit(c)) break;
        }

        return sign ? ans : -ans;
    }
};
