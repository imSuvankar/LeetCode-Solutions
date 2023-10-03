class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<char> ans;
        int i = 0;

        while(i < chars.size()) {

            char currChar = chars[i];
            ans.push_back(currChar);
            int currCount = 1;

            while(i+1 < chars.size() && currChar == chars[i+1]) currCount++, i++;

            if(currCount > 1) {
                for(char c : to_string(currCount)) ans.push_back(c);
            }

            i++;
        }

        chars = ans;
        return chars.size();
    }
};