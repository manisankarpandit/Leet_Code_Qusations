class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>mp;
        for(int  i = 0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto x:mp){
            vector<int>v = x.second;
            if(v.size()>=3){
                bool flag = true;
                for(int i = 1;i<v.size()-1;i++){
                    if(2*v[i] != v[i-1]+v[i+1]) {
                        flag = false;
                        break;
                    }
                }
                if(flag) ans++;
            }
        }
        return ans;
    }
};