class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int del,stx,ans=0;
        for(auto x : nums){
            if(x==1){
                stx++;
                del++;
            }
            else{
                del=stx;
                stx=0;
            }
            ans=max(ans,del);
        }
        if(ans==n)ans--;
        return ans;
    }
    
};