class Solution {
public:
    int digit(int n)
    {
        int ans=0;
        while(n>0)
        {
            ans+=n%10;
            n/=10;

        }
        return ans;
    }
    int maximumSum(vector<int>& nums) {
          
          sort(nums.begin(),nums.end());
          unordered_map<int,int>m;
          int ans=-1;
          for(int i=0;i<nums.size();i++)
          {
              //int t=sumd(nums[i]);
              if(m.find(digit(nums[i]))!=m.end())
              {
                  ans=max(ans,nums[i]+m[digit(nums[i])]);
                  m.erase(digit(nums[i]));

              }
              m[digit(nums[i])]=nums[i];
          }
          return ans;

    }
};