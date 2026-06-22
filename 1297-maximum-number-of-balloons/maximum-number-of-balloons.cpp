class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        unordered_map<char,int>m1,m2;
        for(int i = 0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i = 0;i<text.size();i++){
            m2[text[i]]++;
        }
        int ans = INT_MAX;
        for(auto x : m1) {
            ans = min(ans, m2[x.first] / x.second);
        }
        return ans;
    }
};