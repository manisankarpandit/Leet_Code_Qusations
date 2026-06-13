class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int m = words.size();
        string t = "";
        for(int i = 0;i<m;i++){
            string s = words[i];
            int sum = 0;
            for(int i = 0;i<s.size();i++){
                int idx = s[i]-'a';
                sum+=weights[idx];
            }
            int adx = sum%26;
            char ch = 122-adx;
            t+=ch;
        }
        return t;
    }
};