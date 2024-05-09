class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int cnt=0;
        long long ans=0; 
        for(int i=0;i<nums.size();i++){
            ans+= max(0 ,nums[i]-cnt);
            cnt+=1;
            if(cnt>=k){
                break;
            }
            
        }
        return ans;
            
        
        
    }
};