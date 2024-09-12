class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
       // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=matrix.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int row=n-1;row>=0;row--){
            for(int col=0;col<n;col++){
                if(col==0){
                    dp[row][col]=min(dp[row+1][col],dp[row+1][col+1]) + matrix[row][col];
                }
                else if(col==n-1){
                    dp[row][col]=min(dp[row+1][col],dp[row+1][col-1]) + matrix[row][col];
                }else{
                    dp[row][col]=min(dp[row+1][col],min(dp[row+1][col+1],dp[row+1][col-1]))+matrix[row][col];
                }   
            }
        }
        int res=INT_MAX;
        for(int start=0;start<n;start++){
            res=min(res,dp[0][start]);
        }
        return res;
    }
};