class Solution {
public:
    string shortestPalindrome(string s) {
		vector<int> T(s.size()+1,-1);
		for (int i = 1; i<=s.size(); i++){
			int pos = T[i-1];
			if (pos!=-1 && s[pos]!=s[i-1])
				pos = T[pos];
			T[i] = pos + 1;
		}
		int hp = 0, tp = s.size()-1;
		while (hp<tp) {
			if (hp == -1) {
				hp = 0;
				tp --;
			}
			else if (s[hp]==s[tp]){
				hp ++;
				tp --;
			}
			else hp = T[tp];
		}
		string tmp = s.substr(hp+tp+1,s.size()-hp-tp-1);
		reverse(tmp.begin(),tmp.end());
		return tmp+s;
    }
};