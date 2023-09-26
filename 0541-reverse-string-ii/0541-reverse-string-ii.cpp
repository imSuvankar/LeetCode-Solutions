class Solution {
public:
    string reverseStr(string s, int k) {
        
        int i = 0;

        while(i < s.size()) {

            int j = i+k-1;
            if(s.size()-i < k) j = s.size()-1;

            // cout << i << " " << j << " ";

            while(i <= j) {
                swap(s[i], s[j]);
                i++, j--;
            }

            // cout << s << endl;
            
            i += k+(k/2);
        }

        return s;
    }
};