class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>collect(nums.size(),1);
        int left=1;
        int right=1;
        for(int i =0;i<nums.size();i++){
            collect[i]=left;
            left*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            collect[i]=collect[i]*right;
            right=right*nums[i];
        }
        return collect;
    }
};