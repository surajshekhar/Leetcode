class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto it : mp){
            if(it.second>=2){
                nums.push_back(it.first);
                
            }
        }
        return nums;

        
    }
};