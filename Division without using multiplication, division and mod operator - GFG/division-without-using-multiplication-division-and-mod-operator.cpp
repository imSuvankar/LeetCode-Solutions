//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        bool sign = ((0 < dividend && divisor < 0) || (dividend < 0 && 0 < divisor)) ? 0 : 1;
        
        dividend = abs(dividend);
        divisor = abs(divisor);
        
        long long ans = 0;
        long long start = 0;
        long long end = dividend;
        long long mid = start + (end - start) / 2;
        
        while(start <= end) {
            if(mid * divisor == dividend) {
                ans = mid;
                break;
            } 
            else if (mid * divisor < dividend) {
                ans = mid;
                start = mid + 1;
            }
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }
        
        return sign ? ans : -ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends