// Solution without a stack
class Solution {
public:
    int longestValidParentheses(string s) {
        int maxlen = 0, pos = 0, cnt = 0;
        for (int i = 0; i<s.size(); i++){
            if (s[i]=='(') cnt++;
            else cnt--;
            if (cnt<0) {cnt = 0; pos = i+1;}
            else if (cnt==0) maxlen = max(maxlen, i-pos+1);
        }
        pos = s.size()-1; cnt = 0;
        for (int i=s.size()-1; i>=0;i--){
            if (s[i]==')') cnt++;
            else cnt--;
            if (cnt<0) {cnt = 0; pos = i-1;}
            else if (cnt==0) maxlen = max(maxlen, pos-i+1);
        }
        return maxlen;
    }
};
