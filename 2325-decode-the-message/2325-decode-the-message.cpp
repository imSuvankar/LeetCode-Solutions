class Solution {
public:
    string decodeMessage(string key, string message) {
        
        string newKey = "";
        for(char c : key) {
            if(c != ' ' && newKey.find(c) == string::npos) newKey += c;;
        } 

        for(int i = 0; i < message.size(); i++){
            if('a' <= message[i] && message[i] <= 'z') {
                message[i] = newKey.find(message[i]) + 'a';
            }
        }

        return message;
    }
};