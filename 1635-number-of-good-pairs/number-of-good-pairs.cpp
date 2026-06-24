class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        int count = 0;
        for(auto x:mp){
            int num = x.second;
            count += (num*(num-1))/2;
        }
        return count;
    }
};