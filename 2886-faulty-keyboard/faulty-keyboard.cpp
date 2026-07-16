class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        string t = "";
        for(int i = 0;i<n;i++){
            if(s[i]!='i'){
                t+=s[i];
            }
            else{
                reverse(t.begin(),t.end());
            }
        }
        return t;
    }
};