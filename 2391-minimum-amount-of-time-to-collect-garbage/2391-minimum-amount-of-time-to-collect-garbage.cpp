class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int n = garbage.size();

        // STEP 1:
        vector<int> metal(n, 0);
        vector<int> paper(n, 0);
        vector<int> glass(n, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < garbage[i].size(); j++) {
                if(garbage[i][j] == 'M') metal[i]++;
                if(garbage[i][j] == 'P') paper[i]++;
                if(garbage[i][j] == 'G') glass[i]++;
            }
        }
        
        // STEP 2:
        int metalCost = metal[0];
        int paperCost = paper[0];
        int glassCost = glass[0];
        int totalMinsTill = 0;
        int metalMins = 0;
        int paperMins = 0;
        int glassMins = 0;

        for(int i = 1; i < n; i++) {
            totalMinsTill += travel[i-1];

            if(metal[i]) {
                metalCost += metal[i];
                metalMins = totalMinsTill;
            }

            if(paper[i]) {
                paperCost += paper[i];
                paperMins = totalMinsTill;
            }

            if(glass[i]) {
                glassCost += glass[i];
                glassMins = totalMinsTill;
            }
        }

        return metalCost + metalMins + paperCost + paperMins + glassCost + glassMins;
    }
};