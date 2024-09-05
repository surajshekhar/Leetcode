class Solution {
public:
    int helper(vector<int>&v,int i,vector<int>&dp){
        if(i<0) return 0;
        if(i==0)return v[0];
        if(dp[i]!=-1)return dp[i];
        int excl=helper(v,i-1,dp);
        int incl=helper(v,i-2,dp)+v[i];
        dp[i]= max(excl,incl);
        return dp[i];
    }
    int rob(vector<int>& nums) {
         int n=nums.size();
         vector<int>dp(n+1,-1);
         return helper(nums,n-1,dp);
       
    }
};