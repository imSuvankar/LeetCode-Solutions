class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int ans = 0;
        
        int laserInCurrFloor = 0;
        for(char c : bank[0]) if(c == '1') laserInCurrFloor++;

        for(int i = 1; i < bank.size(); i++) {
            int tempLasers = 0;
            for(char c : bank[i]) if(c == '1') tempLasers++;
            
            ans += (laserInCurrFloor * tempLasers);
            if(tempLasers) laserInCurrFloor = tempLasers;
        }

        return ans;
    }
};
