class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.size()<=1) return 0;
		int dp[s.size()]={0};
		int cnt = 0;
		int maxlen = 0;
		for (int i = 1; i< s.size(); i++){
			if (s[i]==')') {
				if (s[i-1]=='(') dp[i] = (i>=2)?dp[i-2]+2:2;
				else {
					int idx = i-1-dp[i-1]; 
					if (idx>=0 && s[idx] =='(') 
					    dp[i] = dp[i-1]+2+idx>0?dp[idx-1]:0;
				}		
			}
			maxlen = max(maxlen,dp[i]);
		}	
		return maxlen;
    }
};
