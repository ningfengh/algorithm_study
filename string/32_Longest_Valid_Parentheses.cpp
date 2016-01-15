// this solution is wrong, 
// need to get all the cat 


class Solution {
public:
    int longestValidParentheses(string s) {
        bool valid[s.size()][s.size()]={false};
		longest = 0;
		for (int i = 0 ;i < s.size()-1; i++){
			if (s[i]=='('&&s[i+1]==')') {
				valid[i][i+1] = true;
				longest = max(longest,2);
			}
		}
		for (int len = 4; len <= s.size(); len+=2){
			for (int i = 0; i<s.size()-len; i++) {
				if (valid[i][i+len-1] = 
				(valid[i+1][i+len-2]&&s[i]=='('&&s[i+len-1]==')')||
				(valid[i][i+len-3]&&valid[i+len-2][i+len-1])||
				(valid[i][i+1]&&valid[i+2][i+len-1])) longest = max(longest, len);
				
			}
		}
		return longest;
    }
};
