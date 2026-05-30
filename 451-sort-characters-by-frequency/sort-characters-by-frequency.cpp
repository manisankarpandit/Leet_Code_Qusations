class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>m;
        for(int i = 0;i<n;i++){
            m[s[i]]++;
        }
        vector<vector<char>>v(n+1);
        for(auto x:m){
            v[x.second].push_back(x.first);
        }
        string t;
        for(int i = n;i>=1;i--){
            for(char ch:v[i]){
                int freq = i;
                while(freq){
                    t+=ch;
                    freq--;
                }
            }
        }
        return t;
    }
};