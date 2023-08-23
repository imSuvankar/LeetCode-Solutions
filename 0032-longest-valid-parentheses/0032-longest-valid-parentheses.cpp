class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> myStack;  // -> USING STACK - RECOMMENDED
        myStack.push(-1);  
        int ans = 0;       

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') myStack.push(i);  
            else if(myStack.size() == 1) myStack.top() = i;
            else myStack.pop();    
            ans = max(ans, i - myStack.top());
        }

        return ans;

 

        // vector<int> v(1, -1);  // -> USING VECTOR
        // int ans = 0;       

        // for(int i = 0; i < s.size(); i++) {
        //     if(s[i] == '(') v.push_back(i);  
        //     else if(v.size() == 1) v[v.size()-1] = i;
        //     else v.pop_back();    
        //     ans = max(ans, i - v[v.size()-1]);
        // }

        // return ans;
    }
};
