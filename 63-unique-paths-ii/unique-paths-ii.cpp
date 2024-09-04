class Solution {
    int solve(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>> &dp)
    {
        if(i>=0 and j>=0 and obstacleGrid[i][j]==1) //stone / obstacle found
        {
            return 0;
        }
        if(i<0 or j<0) //out of bound
        {
            return 0;
        }
        if(i==0 and j==0) // returned at destination 
        {
            return 1;
        }
        if(dp[i][j]!=-1)
        return dp[i][j];
        int t=solve(obstacleGrid,i-1,j,dp);
        int l=solve(obstacleGrid,i,j-1,dp);
        return dp[i][j]=t+l;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1)); //dp array
        return solve(obstacleGrid,n-1,m-1,dp); // started from end (bottom right ) need to go to (0,0) ->target
    }
};