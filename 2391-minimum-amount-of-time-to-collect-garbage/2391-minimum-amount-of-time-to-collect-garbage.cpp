class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int n = garbage.size();

        // STEP 1:
        vector<int> metalInHome(n, 0);
        vector<int> paperInHome(n, 0);
        vector<int> glassInHome(n, 0);

        for(int i = 0; i < n; i++) {
            for(char c : garbage[i]) {
                if(c == 'M') metalInHome[i]++;
                else if(c == 'P') paperInHome[i]++;
                else if(c == 'G') glassInHome[i]++;
            }
        }
        
        // STEP 2:
        int metalCollect = metalInHome[0];
        int metalTravels = 0;
        int paperCollect = paperInHome[0];
        int paperTravels = 0;
        int glassCollect = glassInHome[0];
        int glassTravels = 0;
        int totalMinTill = 0;

        for(int i = 1; i < n; i++) {
            totalMinTill += travel[i-1];

            if(metalInHome[i]) {
                metalCollect += metalInHome[i];
                metalTravels = totalMinTill;
            }

            if(paperInHome[i]) {
                paperCollect += paperInHome[i];
                paperTravels = totalMinTill;
            }

            if(glassInHome[i]) {
                glassCollect += glassInHome[i];
                glassTravels = totalMinTill;
            }
        }

        return metalCollect + metalTravels + paperCollect + paperTravels + glassCollect + glassTravels;
    }
};