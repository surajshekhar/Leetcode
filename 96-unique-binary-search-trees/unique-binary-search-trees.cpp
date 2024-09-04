class Solution {
    int solve(int n,vector<int>&dp){
        if(n<=1)return 1;
        if(dp[n]!=-1)return dp[n];
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=solve(i-1,dp)*solve(n-i,dp);
            
        }
        return dp[n]=ans;
    }
public:
    int numTrees(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
        
    }
};
/*numTrees(3)
|
+-- numTrees(0) * numTrees(2)
|   |
|   +-- numTrees(0) * numTrees(0)   (Base Case: Returns 1)
|   +-- numTrees(1) * numTrees(0)
|       |
|       +-- numTrees(0) * numTrees(0) (Base Case: Returns 1)
|
+-- numTrees(1) * numTrees(1)
|   |
|   +-- numTrees(0) * numTrees(0)   (Base Case: Returns 1)
|
+-- numTrees(2) * numTrees(0)
    |
    +-- numTrees(1) * numTrees(0)
    |   |
    |   +-- numTrees(0) * numTrees(0)   (Base Case: Returns 1)
    +-- numTrees(0) * numTrees(1)
        |
        +-- numTrees(0) * numTrees(0)   (Base Case: Returns 1)
*/