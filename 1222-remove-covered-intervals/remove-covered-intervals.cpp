class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(), in.end(),cmp);
        int n = in.size();
        int count = 0;
        int l = in[0][0], r = in[0][1];
        for(int i = 1;i<n;i++){
            if((l<=in[i][0])&& (r>=in[i][1])) continue;
            else{
                count++;
                l = in[i][0];
                r = max(r,in[i][1]);
            }
        }
        return count+1;
    }
};