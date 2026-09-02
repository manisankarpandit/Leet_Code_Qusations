class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = 0;
        int odd = 0;
        for (int x : nums1) {
            if (x % 2 == 0) even++;
            else odd++;
        }
        if (even == nums1.size() || odd == nums1.size()) return true;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 0) {
                for (int j = 0; j < nums1.size(); j++) {
                    if (i != j && nums1[j] % 2 != 0) {
                        nums1[i] = nums1[i] - nums1[j];
                        break;
                    }
                }
            }
        }
        return true;
    }
};