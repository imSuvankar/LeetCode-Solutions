class Solution {
private:
    vector<char> getCharVect(int n) {
        vector<char> ans;
        while(n) {
            ans.insert(ans.begin(), '0'+(n%10));
            n /= 10;
        }
        return ans;
    }


public:
    int compress(vector<char>& chars) {
        vector<char> ans = {chars[0]};

        char currChar = chars[0];
        int currCount = 1;

        for(int i = 1; i < chars.size(); i++) {
            if(currChar == chars[i]) currCount++;
            
            else {
                if(currCount > 1) {
                    vector<char> temp = getCharVect(currCount);
                    ans.insert(ans.end(), temp.begin(), temp.end());
                }
                ans.push_back(chars[i]);
                currChar = chars[i];
                currCount = 1;
            }
        }

        if(currCount > 1) {
            vector<char> temp = getCharVect(currCount);
            ans.insert(ans.end(), temp.begin(), temp.end());
        }

        chars = ans;
        return chars.size();
    }
};