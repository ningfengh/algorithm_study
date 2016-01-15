class Solution {
public:
    int longestValidParentheses(string s) {
		stack <int> stk;
		int maxlen = 0;
		stk.push(-1);
		for (int i = 0; i<s.size(); i++){
			if (stack.top()!=-1 && s[i]==')' && s[stk.top()]=='('){
				stack.pop();
				maxlen = max(maxlen, i-stk.top());			
			} 		
			else stk.push(i);
		}
		return maxlen;
    }
};
