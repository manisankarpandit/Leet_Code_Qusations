class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>s;
        for(int i = 0;i<n;i++){
            s[nums[i]]++;
        }
        int count = 0;
        if(k==0){
            for(auto x:s){
                if(x.second>=2) count++;
            }
            return count;
        }
        for(auto x:s){
            if(s.find(x.first+k)!=s.end()) count++;
        }
        return count;
    }
};