class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int start = 0;
        int end = letters.size()-1;
        int mid = start + (end - start) / 2;
        bool found = false;

        while(start <= end) {
            if(letters[mid] == target){
                found = true;
                break;
            } 
            else if(letters[mid] < target) start = mid + 1;
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }

        if(found) {
            char currChar = letters[mid];
            while(mid < letters.size() && currChar == letters[mid]) mid++;
        }

        return letters[mid % letters.size()];
    }
};