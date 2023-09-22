class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        // adding avg of first k elements
        int sum = 0;
        for(int i = 0; i < k; i++) sum += nums[i];
        double ans = sum / (double)k;

        // then sliding window 
        int i = 0;
        int j = i+k;
        while(j < nums.size()) {
            sum -= nums[i];
            sum += nums[j];
            double tempAvg = sum / (double)k;
            if(ans < tempAvg) ans = tempAvg;
            i++, j++;
        }

        return ans;
    }
};