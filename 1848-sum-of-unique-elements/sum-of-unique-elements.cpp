class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;

        for(auto i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(x.second<2){
                sum+=x.first;
            }

        }
        return sum;
        
    }
};