class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int  n = cost.size();
        sort(cost.begin(),cost.end());
        reverse(cost.begin(),cost.end());
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum += cost[i];
        }
        int i = 2;
        while(i<n){
            sum -= cost[i];
            i+=3;
        }
        return sum;
    }
};