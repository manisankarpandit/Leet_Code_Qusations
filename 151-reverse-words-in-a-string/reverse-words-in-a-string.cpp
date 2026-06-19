class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>ans;
        string t;
        while(ss>>t){
            ans.push_back(t);
        }
        string a;
        for(int i = ans.size()-1;i>=0;i--){
            a+=ans[i];
            if (i != 0) {
                a += " ";
            }
        }
        return a;
    }
};