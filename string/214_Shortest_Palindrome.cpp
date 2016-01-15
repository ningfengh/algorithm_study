class Solution {
public:
    string shortestPalindrome(string s) {
        int hp = 0, tp = s.size()-1, right = s.size()-1;
		while (hp<=tp) {
			if (s[hp]==s[tp]){
				hp++;
				tp--;
			}
			else {
				right--;
				hp = 0;
				tp = right;
			}
		}
		string tmp = s.substr(right+1,s.size()-right);
		reverse(tmp.begin(),tmp.end());
		return tmp+s;
    }
};