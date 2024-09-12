//Using priority queue.
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int& num:nums){
            pq.push(num);
            if(pq.size()>k)
                pq.pop();
        }
        unordered_map<int,int> um;
        vector<int> ret;
        while(!pq.empty()){
            um[pq.top()]++;
            pq.pop();
        }

        for(int& num:nums){
            if(um.find(num)!=um.end() && um[num]-->0)
                ret.push_back(num);
        }
        
        return ret;
    }

};