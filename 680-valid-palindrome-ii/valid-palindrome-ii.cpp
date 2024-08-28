class Solution {
     bool checkPalindrome(string s, int i, int j) {
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }

            else{
                return false;
            }
        }
        return true;
    }


public:
    bool validPalindrome(string s) {
        int i=0;
        int n = s.length();
        int j = n-1;

        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }

            else{
                return checkPalindrome(s,i,j-1) || checkPalindrome(s, i+1, j);
            }
        }
        return true;
    }
};
