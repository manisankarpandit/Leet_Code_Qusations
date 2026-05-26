class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        string s,t;
        for(int i = 0;i<n;i++){
            if(islower(word[i])) s.push_back(word[i]);
            else t.push_back(word[i]);
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int count = 0;
        int i = 0,j = 0;
        while(i<s.size() && j<t.size()){
            int diff = s[i] - t[j];
            if(diff == 32) {
                count++;
                char lc = s[i];
                char uc = t[j];
                while(i < s.size() && s[i] == lc) i++;
                while(j < t.size() && t[j] == uc) j++;
            }
            else if(diff < 32) i++;
            else j++;
        }
        return count;
    }
};