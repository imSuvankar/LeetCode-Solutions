bool comp(vector<int> a, vector<int> b) {
    return a[1] < b[1];
}

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(), pairs.end(), comp);
        int ans = 0;

        for(int i = 0; i < pairs.size(); i++) {
            int temp = 1;
            int curr = pairs[i][1];

            for(int j = i+1; j < pairs.size(); j++) {
                if(curr < pairs[j][0]) {
                    temp++;
                    curr = pairs[j][1];
                } 
            }

            if(ans < temp) ans = temp;
        }

        return ans;
    }
};