class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        //go through accumulate until the index val is bigger store in maxi and 
        //update maxi return it
        int currsum=nums[0];
        int sum=currsum;
        for(int i =1;i<nums.size();i++){
            if(nums[i]>nums[i-1])currsum+=nums[i];
            else{
                currsum=nums[i];
               // sum=max(sum,currsum)
            }
            sum=max(sum,currsum);
        }
        return sum;

        
    }
};