class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int t) {
        
        // first position
        int start = 0;
        int end = arr.size()-1;
        int mid = start + (end - start) / 2;
        int first = -1;

        while(start <= end) {
            if (arr[mid] == t) {
                first = mid;
                end = mid - 1;
            }
            else if(arr[mid] < t) start = mid + 1;
            else end = mid - 1; 
            mid = start + (end - start) / 2;
        }



        // last position
        start = 0;
        end = arr.size()-1;
        mid = start + (end - start) / 2;
        int last = -1;

        while(start <= end) {
            if (arr[mid] == t) {
                last = mid;
                start = mid + 1;
            }
            else if(arr[mid] < t) start = mid + 1;
            else end = mid - 1; 
            mid = start + (end - start) / 2;
        }


        return {first, last};
    }
};