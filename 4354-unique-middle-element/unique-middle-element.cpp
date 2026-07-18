class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        int middle = n/2;
        for(int i = 0;i<n;i++){
            if(mp[nums[middle]]!=1) return false;
        }
        return true;
    }
};