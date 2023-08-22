class Solution {
private:

    // bool isPossible(vector<int> arr, long long k, int mid) {
    //     int children = 1;
    //     int candies = 0;

    //     for(int i : arr) {
    //         if(candies + i <= mid) candies += i;
    //         else {
    //             children++;
    //             if(children > k || i > mid) return false;
    //             candies = i;
    //         }
    //     }

    //     return true;
    // }


    bool isPossible(vector<int> arr, long long k, int mid) {
        long long int children = 0;
        for (int i : arr) {
            children += i / mid;
            if (children >= k) return true;
        }
        return false;
    }


public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long int start = 1;
        long long int end = *max_element(candies.begin(), candies.end());;
        long long int mid = start + (end - start) / 2;
        long long int ans = 0;

        while(start <= end) {
            if(isPossible(candies, k, mid)) {
                ans = mid;
                start = mid + 1;
            }
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }

        return ans;
    }
};