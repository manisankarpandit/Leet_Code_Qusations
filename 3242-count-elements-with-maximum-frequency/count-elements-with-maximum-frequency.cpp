class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        int mx = INT_MIN;
        for(auto x:mp){
            mx = max(mx,x.second);
        }
        int ans = 0;
        for(auto a:mp){
            if(a.second==mx){
                ans+=a.second;
            }
        }
        return ans;
    }
};