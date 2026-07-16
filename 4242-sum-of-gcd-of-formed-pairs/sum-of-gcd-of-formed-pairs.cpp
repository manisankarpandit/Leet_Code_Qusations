class Solution {
public:
    int gcd(int a,int b){
        while(b){
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        vector<int>pg;
        for(int i = 0;i<n;i++){
            mx = max(mx,nums[i]);
            pg.push_back(gcd(mx,nums[i]));
        }
        sort(pg.begin(),pg.end());
        int i = 0;
        int j = pg.size()-1;
        long long sum = 0;
        while(i<j){
            sum += gcd(pg[i],pg[j]);
            i++;
            j--;
        }
        return sum;
    }
};