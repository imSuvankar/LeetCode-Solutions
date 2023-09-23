class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int i = 0;
        while(i < flowerbed.size() && n) {

            if(!flowerbed[i]) {
                bool prev = (i == 0) ? 0 : flowerbed[i-1];
                bool next = (i == flowerbed.size()-1) ? 0 : flowerbed[i+1];

                if(!prev && !next) {
                    flowerbed[i] = 1;
                    n--; 
                }
            }
            i++;
        }

        return !n;
    }
};
