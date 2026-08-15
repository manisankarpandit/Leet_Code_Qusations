class Solution {
public:
    bool stoneGame(vector<int>& nums) {
        // return true;
        int esum = 0;
        int osum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(i%2==0) esum += i;
            else osum += i;
        }
        if(esum<osum || osum>esum) return true;
        return false;
    }
};