class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cnto = 0, cntc = 0;
        string ans;
        for (char& c : s) {
            if (c != '(' && c != ')') {
                ans += c;
            } else if (c == '(') {
                cnto++;
                ans += c;
            } else if (cnto > 0) {
                ans += c;
                cnto--;
            }
        }

       
        if (cnto > 0) {
             int n = ans.length();
            s = ans;
            ans = "";
            cnto= 0, cntc = 0;
            for (int i = n - 1; i >= 0; i--) {
                char c = s[i];
                if (c != '(' && c != ')') {
                    ans += c;
                } else if (c == ')') {
                    cntc++;
                    ans += c;
                } else if (cntc > 0) {
                    ans += c;
                    cntc--;
                }
            }
        }
        else{
            return ans;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};