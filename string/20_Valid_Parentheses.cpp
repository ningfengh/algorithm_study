class Solution {
public:
    bool isValid(string s) {
        stack <char> parent;
        for (int i = 0; i<s.size(); i++){
            if (s[i]=='(' || s[i]=='{' || s[i]=='[') parent.push(s[i]);
            else {
                if (parent.empty()) return false;
                switch (s[i]){
                    case ')': 
                        if (parent.top()!='(') return false;
                        else parent.pop();
                        break;
                    case '}':
                        if (parent.top()!='{') return false;
                        else parent.pop();
                        break;
                    case ']':
                        if (parent.top()!='[') return false;
                        else parent.pop();
                        break;          
                }
            }
        }
        if (parent.empty()) return true;
        else return false;
    }
};