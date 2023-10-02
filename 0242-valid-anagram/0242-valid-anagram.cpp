class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> mapS;
        for(char c : s) mapS[c]++;

        map<char, int> mapT;
        for(char c : t) mapT[c]++;

        return mapS == mapT;
    }
};