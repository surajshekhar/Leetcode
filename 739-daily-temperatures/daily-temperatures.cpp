class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<int>sst;
        vector<int>res(temps.size(),0);
        for(int i=0;i<temps.size();i++){
            while(!sst.empty() && temps[i]>temps[sst.top()]){
                int idx=sst.top();
                sst.pop();
                res[idx]=i-idx;
            }
            sst.push(i);
        }
        return res;

        
    }
};