class Solution {
public:
    int minSetSize(vector<int>& nums) {
        priority_queue<int>hp;
        unordered_map<int,int>mp;
        int redsize=nums.size()/2;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto i: mp){
            hp.push(i.second);
        }

        int cnt=0;
        while(!hp.empty() && redsize>0 ){
            int t=hp.top();
            hp.pop();
            redsize-=t;
            cnt++;

        }
        return cnt;




    }
};