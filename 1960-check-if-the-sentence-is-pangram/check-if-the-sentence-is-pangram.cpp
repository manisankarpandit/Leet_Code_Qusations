class Solution {
public:
    bool checkIfPangram(string s) {
        int n = s.size();
        vector<char>v(26,0);
        for(int i = 0;i<s.size();i++){
            int idx = s[i]-'a';
            v[idx]++;
        }
        for(int i = 0;i<26;i++){
            if(v[i]<=0) return false;
        }
        return true;
    }
};