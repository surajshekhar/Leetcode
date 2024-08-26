class Solution {
    // int solvemem(int index,vector<int>&cost,vector<int>dp){
    //     //base case
    //     if(index<=1)return 0;
    //     if(dp[index]!=-1)return dp[index];
    //     //solve 1
    //     return dp[index]=min(cost[index-1]+solvemem(index-1,cost,dp),cost[index-2]+solvemem(index-2,cost,dp));

public:

    int minCostClimbingStairs(vector<int>& cost) {
        //base case
        int n=cost.size();
        vector<int>dp(n+1,0);
        for(int i=2;i<=n;i++){
            dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);
        }
        
        return dp[n]; ;

    }
};