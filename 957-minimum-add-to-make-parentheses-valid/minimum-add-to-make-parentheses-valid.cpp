class Solution {
public:
    int minAddToMakeValid(string s) {
        //M1
        int n = s.size();
        int count = 0;
        int add = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='(') count++;
            else{
                if(count>0) count--;
                else add++;
            }
        }
        return count+add;

        //M2 using stack

        //int count = 0;
        // stack<char>st;
        // for(int i = 0;i<s.size();i++){
        //     if(s[i]=='(') st.push(s[i]);
        //     else{
        //         if(st.empty()) count++;
        //         else st.pop();
        //     }
        // }
        // return count + st.size();
    }
};