class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        int i = 0;
        for(string &s: nums){
           if(s[i]=='0'){
            ans+='1';
           }
           else{
            ans+='0';
           }
           i++;
        }
        return ans;
    }
};