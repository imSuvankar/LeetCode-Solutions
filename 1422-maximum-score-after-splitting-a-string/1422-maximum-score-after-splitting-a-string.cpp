class Solution {
public:
    int maxScore(string s) {
        
        int n = s.size();

        vector<int> zerosLeft;
        int currZero = 0;
        for(int i = 0; i < n-1; i++) {
            if(s[i] == '0') currZero++;
            zerosLeft.push_back(currZero);
        }

        vector<int> onesRight;
        int currOne = 0;
        for(int i = n-1; i > 0; i--) {
            if(s[i] == '1') currOne++;
            onesRight.insert(onesRight.begin(), currOne);
        }

        int ans = INT_MIN;
        for(int i = 0; i < n-1; i++) {
            ans = max(ans, zerosLeft[i] + onesRight[i]);
        }

        return ans;
    }
};