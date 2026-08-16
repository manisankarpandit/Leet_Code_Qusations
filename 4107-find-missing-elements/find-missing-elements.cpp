class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int mx = INT_MIN;
        unordered_set<int>s;
        for(int i = 0;i<n;i++){
            mn = min(mn,nums[i]);
            mx = max(mx,nums[i]);
            s.insert(nums[i]);
        }
        vector<int>ans;
        for(int i = mn;i<=mx;i++){
            if(s.find(i)==s.end()) ans.push_back(i);
        }
        return ans;
    }
};