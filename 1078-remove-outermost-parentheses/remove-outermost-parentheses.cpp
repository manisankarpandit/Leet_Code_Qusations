class Solution {
public:
    string removeOuterParentheses(string s) {
        string p ="";
        int n = s.size();
        int depth = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                if(depth>0) p.push_back(s[i]);
                depth++;
            }
            else{
                depth--;
                if(depth>0) p.push_back(s[i]);
            }
        }
        return p;
    }
};