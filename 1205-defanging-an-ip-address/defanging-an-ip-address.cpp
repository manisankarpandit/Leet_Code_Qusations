class Solution {
public:
    string defangIPaddr(string s) {
        int n = s.size();
        string t;
        for(int i = 0;i<n;i++){
            if(s[i]!='.'){
                t+=s[i];
            }
            else{
                t+="[.]";
                // t+='.';
                // t+=']';
            }
        }
        return t;
    }
};