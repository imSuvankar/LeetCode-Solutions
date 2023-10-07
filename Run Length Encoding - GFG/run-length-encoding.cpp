//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    string ans = "";
    
    for(int i = 0; i < src.size(); i++) {
        
        char currChar = src[i];
        ans += currChar;
        
        int currCount = 1;
        while(i+1 < src.size() && currChar == src[i+1]) currCount++, i++;
        
        i--;
        ans += to_string(currCount);
        i++;
    }
    
    return ans;
}     
 
