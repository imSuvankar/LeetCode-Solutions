//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // left most occ
        int start = 0;
        int end = v.size() - 1;
        int mid = start + (end - start) / 2;
        int leftMost = -1;
        
        while(start <= end) {
            if(v[mid] == x) {
                leftMost = mid;
                end = mid - 1;
            }
            else if(v[mid] < x) start = mid + 1;
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }
        
        
        // right most occ
        start = 0;
        end = v.size() - 1;
        mid = start + (end - start) / 2;
        int rightMost = -1;
        
        while(start <= end) {
            if(v[mid] == x) {
                rightMost = mid;
                start = mid + 1;
            }
            else if(v[mid] < x) start = mid + 1;
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }
        
        
        return {leftMost, rightMost};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends