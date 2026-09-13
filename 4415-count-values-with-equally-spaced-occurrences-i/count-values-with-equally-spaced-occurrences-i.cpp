class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto x:mp){
            if(x.second.size()==3){
                int a = x.second[0];
                int b = x.second[1];
                int c = x.second[2];
                if(2*b==a+c) ans++;
            }
        }
        return ans;
    }
};