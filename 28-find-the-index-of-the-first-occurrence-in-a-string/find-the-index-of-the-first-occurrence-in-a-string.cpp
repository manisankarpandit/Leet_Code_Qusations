class Solution {
public:
    int strStr(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = 0;
        while(i <= n - m){
            int j = 0;
            while(j < m && s[i + j] == t[j]){
                j++;
            }
            if(j == m) return i;
            i++;
        }
        return -1;
    }
};