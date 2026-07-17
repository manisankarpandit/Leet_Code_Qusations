class Solution {
public:
    int possibleStringCount(string s) {
        int n = s.size();
        int ways = 1;
        for(int i = 1;i<n;i++){
            if(s[i]==s[i-1]) ways++;
        }
        return ways;
    }
};