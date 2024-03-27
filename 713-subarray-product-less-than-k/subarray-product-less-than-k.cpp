class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt=0;
        int i=0;
        int j=0;
        int prod=1;
        int n=nums.size();
 

        while(j<n){
            prod=prod*nums[j];
            while(prod>=k && i<j){
                prod=prod/nums[i];
                i++;
            }
            if(prod<k){
                cnt=cnt+j-i+1;
                
            }
            j++;    
        }
        return cnt;

        
        
    }
};