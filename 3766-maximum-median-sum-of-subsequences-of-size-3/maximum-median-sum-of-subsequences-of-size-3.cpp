class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i =0;
        while(i<n){
            ans=ans+nums[n-2];
            n=n-2;
            i++;
        }
        return ans;
    
        
        
    }
};