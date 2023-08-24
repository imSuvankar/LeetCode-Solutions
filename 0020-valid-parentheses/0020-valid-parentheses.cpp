class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char i : s) {
            if (i=='(' || i=='{' || i=='[') st.push(i);
            
            else {
                if(st.empty()) return false;
                else if((i == ')' && st.top() != '(') || (i == '}' && st.top() != '{') || (i == ']' && st.top() != '[')) return false;
                else st.pop();
            }
        }

        return st.empty();
    }
};
