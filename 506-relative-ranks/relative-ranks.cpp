class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<string>res(nums.size());
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;

        }
        priority_queue<int>hp(nums.begin(),nums.end());
        int cnt=1;
        while(!hp.empty()){
            int x=hp.top();
            if(cnt==1)res[mp[x]]="Gold Medal";
            else if(cnt==2){
                res[mp[x]]="Silver Medal";

                
            }
            else if(cnt==3){
                res[mp[x]]="Bronze Medal";
            }
            else{
                res[mp[x]]=to_string(cnt);
            }cnt++;
            hp.pop();
        }
        return res;


        
        
        
    }
};