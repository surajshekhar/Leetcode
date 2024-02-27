class Solution {
public:
    bool partition(vector<int> nums,int k,int mxsum){
        int cnt=1;

        int s=0;
        int n=nums.size();


        for(int i=0;i<n;i++){
             
             if(nums[i]>mxsum){
                return false;
             }
             if(s+nums[i]>mxsum){
                 cnt++;
                 s=nums[i];
             }
             else
             s+=nums[i];
        }

        return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int low=0;
        int high=1e9;
        int ans=1;



        while(low<=high){

            int mid=(low+high)/2;

            if(partition(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;


        }


        return ans;
    }
};