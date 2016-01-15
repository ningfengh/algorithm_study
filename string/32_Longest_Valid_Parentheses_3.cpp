class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.size()<=1) return 0;
		int dp[s.size()]={0};
		int cnt = 0;
		int maxlen = 0;
		for (int i = 0; i< s.size(); i++){
			if (s[i]=='(') cnt++;
			else if (s[i]==')' && cnt>0) {//find a match		
				dp[i] = dp[i-1]+2;
				if (i-dp[i-1]-2>0) dp[i]+=dp[i-dp[i-1]-2];
				cnt --;
				maxlen = max(maxlen,dp[i]);
			} 
		}	
		return maxlen;
    }
};
