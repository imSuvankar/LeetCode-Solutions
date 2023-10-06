class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        while(i < chars.size()) {

            char currChar = chars[i];
            int currCount = 1;

            while(i+1 < chars.size() && currChar == chars[i+1]) {
                currCount++;
                chars.erase(chars.begin() + i+1);
            }

            i++;

            if(1 < currCount) {
                for(char c : to_string(currCount)) {
                    chars.insert(chars.begin()+i, c);
                    i++;
                }
            }
        }

        return chars.size();
    }
};