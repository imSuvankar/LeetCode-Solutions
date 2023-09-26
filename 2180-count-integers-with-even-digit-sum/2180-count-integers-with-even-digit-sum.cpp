class Solution {
public:
    int countEven(int num) {
        
        int ans = 0;

        for(int i = 0; i <= num; i++) {
            int sum = 0; 
            for (int curr = i; curr; sum += curr % 10, curr /= 10);
            
            if(!(sum & 1)) ans++;
        }

        return ans-1;
    }
};