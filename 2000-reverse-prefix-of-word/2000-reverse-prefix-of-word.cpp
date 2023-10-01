class Solution {
public:
    string reversePrefix(string word, char ch) {

        // reverse(word.begin(), word.begin() + word.find(ch) + 1);

        int i = 0;
        int j = word.find(ch);
        while(i < j) swap(word[i++], word[j--]);

        return word;
    }
};