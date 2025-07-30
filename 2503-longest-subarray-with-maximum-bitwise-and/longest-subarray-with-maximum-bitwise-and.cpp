class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxval=*max_element(nums.begin(),nums.end());
        int streak=0;
        int ans=0;
        for(auto x:nums){
            if(x==maxval){
                streak++;
                if(streak>ans)ans=streak;
            }
            else{
                streak=0;
            }
            
        }
        return ans;

    }
};