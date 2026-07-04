class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<string>ans;
        vector<int>freq(26,INT_MAX);
        for(int i = 0;i<n;i++){
            vector<int>v(26,0);
            string s = words[i];
            for(int j = 0;j<s.size();j++){
                v[s[j]-'a']++;
            }
            for(int k = 0;k<26;k++){
                freq[k] = min(freq[k],v[k]);
            }
        }
        for(int i = 0;i<26;i++){
            while(freq[i]--) {
                string s = "";
                s += ('a' + i);
                ans.push_back(s);
            }
        }
        return ans;
    }
};