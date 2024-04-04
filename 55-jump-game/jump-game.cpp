class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return true;
        int check=nums[0];
        for(int i=0;i<nums.size();i++){
        
            if(check>=nums.size()-1)return true;
            if(nums[i]==0 && check==i)return false;
            if(i+nums[i]>check)check=nums[i]+i;
        
            

        }return true;
        
    }
};