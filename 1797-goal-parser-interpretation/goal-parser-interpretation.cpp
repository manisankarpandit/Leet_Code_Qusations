class Solution {
public:
    string interpret(string c) {
        int n = c.size();
        string s;
        int i = 0;
        while(i<n){
            if(c[i]=='(' && c[i+1]==')') {
                s+='o';
                i+=2;
            }
            else if (c[i]=='(' && c[i+1]=='a' && c[i+2]=='l' && c[i+3]==')') {
                s+='a';
                s+='l';
                i+=4;
            }
            else {
                s+=c[i];
                i++;
            }
        }
        return s;
    }
};