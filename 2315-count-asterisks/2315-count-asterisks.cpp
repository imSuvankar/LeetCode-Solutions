class Solution {
public:
    int countAsterisks(string s) {
        
        bool lock = false;
        int ans = 0;

        for(char c : s) {
            if(c == '|') lock = !lock;
            else if (c == '*') if(!lock) ans++;
        }

        return ans;
    }
};