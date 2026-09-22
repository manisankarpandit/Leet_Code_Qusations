class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int idx = -1;
        for(int i = n-1;i>=0;i--){
            if(num[i]%2!=0){
                idx = i;
                break;
            }
        }
        string t = "";
        for(int i = 0;i<=idx;i++){
            t+=num[i];
        }
        return t;
    }
};