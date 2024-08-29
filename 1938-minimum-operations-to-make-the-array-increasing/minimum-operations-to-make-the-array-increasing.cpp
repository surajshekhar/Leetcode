class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int ans = 0, n = nums.size();
        vector<int>temp = nums;
        for(int i=0;i<n-1;i++)
        {
            if(temp[i] >= temp[i+1])
                temp[i+1] = temp[i]+1;
        }
        for(int i=0;i<n;i++)
            ans += temp[i] - nums[i];
        return ans;
    }
};