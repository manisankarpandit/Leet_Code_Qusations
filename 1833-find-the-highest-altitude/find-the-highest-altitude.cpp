class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int sum = 0;
        int mx = 0;
        // vector<int>ans;
        // ans.push_back(sum);
        for(int i = 0;i<n;i++){
            sum+=gain[i];
            // ans.push_back(sum);
            mx = max(mx,sum);
        }
        // for(int i = 0;i<ans.size();i++){
        //     mx = max(mx,ans[i]);
        // }
        return mx;
    }
};