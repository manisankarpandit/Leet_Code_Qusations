class Solution {
public:
    int totalWaviness(int n, int m) {
        int count = 0;
        for(int j = n;j<=m;j++){
            string s = to_string(j);
            for(int i = 1;i<s.size()-1;i++){
                if((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1])) count++;
            }
        }
        return count;
    }
};