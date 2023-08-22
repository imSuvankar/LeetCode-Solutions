class Solution {
private:
    int isPossible(vector<int> arr, int days, int mid) {
        int dayCount = 1;
        int weightCount = 0;

        for(int i : arr) {
            if(weightCount + i <= mid) weightCount += i;
            else {
                dayCount++;
                if(dayCount > days || i > mid) return false;
                weightCount = i;
            }
        }

        return true;
    }



public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int start = 0;
        int end = accumulate(weights.begin(), weights.end(), 0);
        int mid = start + (end - start) / 2;

        int ans = -1;

        while(start <= end) {
            if(isPossible(weights, days, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
            mid = start + (end - start) / 2;
        }

        return ans;
    }
};