class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int x : nums) {
            m[x]++;
        }
        vector<int>ans;
        for(int i = 1;i<=n;i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
        // int i = 0;
        // while (i < n) {
        //     int correctIdx = nums[i] - 1;
        //     if (nums[correctIdx] == nums[i] || correctIdx == i) i++;
        //     else swap(nums[i], nums[correctIdx]);
        // }
        // vector<int> ans;
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] != i + 1)
        //         ans.push_back(i + 1);
        // }
        // return ans;
    }
};