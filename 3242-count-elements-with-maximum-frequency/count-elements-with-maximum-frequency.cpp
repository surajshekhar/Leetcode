class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i:nums){
            mp[i]++;
            maxi=max(maxi,mp[i]);
        }
        int cnt=0;
        for(auto i:mp){
            if(i.second==maxi){
                cnt+=i.second;
            }
        }
        return cnt;
        
    }
};