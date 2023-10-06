class Solution {
public:
    int countPrimes(int n) {
        
        /*
        // naive approach -> TLE (17/66 TCs)
        int ans = 0;

        for(int i = 2; i < n; i++) {
            bool flag = true;

            for(int j = 2; j < i; j++) {
                if(i % j == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }

        return ans;
        */


        /*
        // sqrt approach -> TLE (20/66 TCs)
        int ans = 0;

        for(int i = 2; i < n; i++) {
            bool flag = true;

            for(int j = 2; j*j <= i; j++) {
                if(i % j == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }

        return ans;
        */



        // seive of eratosthenes
        int ans = 0;

        vector<bool> nums(n+1, true);
        nums[0] = nums[1] = false;

        for(int i = 2; i < n; i++) {
            if(nums[i]) {
                ans++;
                for(int j = 2*i; j < n; j += i) nums[j] = false;
            }
        }

        return ans;
    }
};