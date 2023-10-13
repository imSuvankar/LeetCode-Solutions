class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int X = 0;
        for(string s : operations) (s == "++X" || s == "X++") ? X++ : X--;
        return X;
    }
};