class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        unordered_map<string,string>mp;
        for(auto x:k){
            mp[x[0]]=x[1];
        }
        bool flag = false;
        string key = "";
        string ans = "";
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(') flag = true;
            else if(s[i]==')'){
                if(mp.find(key)!=mp.end()) ans += mp[key];
                else ans += '?';
                flag = false;
                key = "";
            }
            else if(flag) key += s[i];
            else ans += s[i];
        }
        return ans;
    }
};