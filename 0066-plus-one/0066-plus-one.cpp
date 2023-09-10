class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        
        int i = arr.size() - 1;
        int newNum = arr[i] + 1;
        i--;

        vector<int> ans (1, newNum % 10);
        int carry = 0;
        if(newNum - 9 > 0) carry = newNum - 9;

        while (i >= 0) {
            newNum = arr[i] + carry;
            ans.insert(ans.begin(), newNum % 10);
            carry = (newNum - 9 > 0) ? newNum - 9 : 0; 
            i--;
        }

        if(carry > 0) ans.insert(ans.begin(), carry);
        return ans;
    }
};