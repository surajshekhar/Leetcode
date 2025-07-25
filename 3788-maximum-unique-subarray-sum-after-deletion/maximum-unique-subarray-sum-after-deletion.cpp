class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>sst;
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
            sst.insert(nums[i]);
            }
            else{
                maxi=max(maxi,nums[i]);
                }
        }
        if(sst.size()==0){
            return maxi;
        }
        for(auto s:sst){
            sum+=s;
            
        }
        return sum;

        
    }
};
