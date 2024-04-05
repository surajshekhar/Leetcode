class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>hp;
        for(auto &i:piles){
            hp.push(i);
        }
        double x;
        long long int ans=0;
        while(k--){
            x=hp.top();
            hp.pop();
            hp.push(ceil(x/2));
        }
        while(!hp.empty()){
            ans+=hp.top();
            hp.pop();
        }
        return ans;
    }
};