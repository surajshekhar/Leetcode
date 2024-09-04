class Solution {
    // int solve(int i,int j,vector<vector<int>>dp){
    //      if(i==0&&j==0 )return 1;
    //      if(i<0||j<0)return 0;

    //      if(dp[i][j]!=-1)return dp[i][j];

    //     int left=solve(i-1,j,dp);

    //     int right=solve(i,j-1,dp);
    //     return dp[i][j]=left+right;

        
        
    
public:
    int uniquePaths(int m, int n) {
        //base case
       vector<vector<int>> dp (m,vector<int>(n)); 
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0 )dp[i][j]=1;
            else{
                int up=0,left=0;
                if(i>0)up=dp[i-1][j];
                if(j>0)left=dp[i][j-1];
                dp[i][j]=up+left;
            }
        }
       }
       return dp[m-1][n-1];


        //using recursion
        // vector<vector<int>> dp (m,vector<int>(n,-1));
        // return solve(m-1,n-1,dp);
        //we need to find all possible ways 

    }
};