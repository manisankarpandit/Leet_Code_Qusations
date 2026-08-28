class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        int i = k;
        while (true) {
            if (s.find(i) == s.end()) {
                return i;
            }
            i += k;
        }
    }
};