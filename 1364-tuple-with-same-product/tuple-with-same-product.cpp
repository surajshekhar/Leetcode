class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int prod=nums[i]*nums[j];
                mp[prod]++;
            }
        }
        int res=0;
        for(auto x:mp){
            int cnt=x.second;
            if(cnt>1){
                res+=cnt*(cnt-1)*4;//each pairs gives 8 selecting 2 of all cnt 
             
            }
        }
        return res;
    }
};