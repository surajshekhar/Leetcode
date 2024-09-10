class Solution {
    private:
    int solve(string &text1,string &text2, vector<vector<int>>dp,int i,int j){
        //base case 
        if(i==text1.size())return 0;
        if(j==text2.size())return 0;
        //memo cond
        if(dp[i][j]!=-1)return dp[i][j];





        //store cond

        int ans=0;
        if(text1[i]==text2[j]){
            ans=1+solve(text1,text2,dp,i+1,j+1);//couting before inc it

        }
        else{
            ans=max(solve(text1,text2,dp,i,j+1),solve(text1,text2,dp,i+1,j));
        }
        //storing it in dp
        return dp[i][j]= ans;
    }

    int solvetab(string a,string b){
        vector<vector<int>>dp(a.size()+1,vector<int>(b.size()+1,0));

        for(int i=a.size()-1;i>=0;i--){
            for(int j=b.size()-1;j>=0;j--){
                int ans=0;
                if(a[i]==b[j]){
                    ans=1+dp[i+1][j+1];//couting before inc it
                    }
                else{
                ans=max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j]= ans;
            }
        }
        return dp[0][0];
    }

public:
    
    int longestCommonSubsequence(string text1, string text2) {
        //Tle in recursive so applying memoisation
        
        //there are two states thats being changed
       // vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));


        return solvetab(text1,text2);

        //else max of both pointer 
      //  return solve(text1,text2,dp,0,0);

        
    }
};