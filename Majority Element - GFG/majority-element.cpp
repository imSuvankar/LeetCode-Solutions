//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        /*
        // APPROACH 1: BINARY SEARCH
        sort(a, a+size);
        
        int midElem = a[size / 2];
        
        int count = 0;
        for(int i = 0; i < size; i++) if(a[i] == midElem) count++;
        
        return (count > size/2) ? midElem : -1;
        */
        
        
        // APPROACH 2: USING MAP
        map<int, int> intMap;
        for(int i = 0; i < size; i++) intMap[a[i]]++;
        
        for(auto i : intMap) if(i.second > size/2) return i.first;
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends