//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    long long getGCD(long long a, long long b) {
        if(a == 0) return b;
        if(b == 0) return a;
        return getGCD(max(a, b) - min(a, b), min(a, b));
    }
    
    
public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd = getGCD(A, B);
        long long lcm = (A * B) / gcd;
        return {lcm, gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends