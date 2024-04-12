class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
    int n = changed.size();
    //if size of changed array  is  odd then it will not changed array of any original array
        if(n%2 != 0){
            return { };
        }
        unordered_map<int , int>mp;
        sort(changed.begin() , changed.end());
        // store frequency of each element in map 
        for(int & num : changed){
            mp[num]++;
        }
        vector<int>result;
        for(int & num : changed){
            int twice = 2*num;

            if(mp[num] == 0) continue;// if frequency of element is zero then no use
            if(mp.find(twice) == mp.end() || mp[twice] == 0){ // no element found or if found as 0 frequency then return 
                return { };
            }
//if above any case not hit it means we found twice array 
            result.push_back(num);
            mp[num]-- ;
            mp[twice]--;   
        }
        return result;
    }
};