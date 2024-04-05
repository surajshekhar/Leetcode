class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<double>hp(nums.begin(),nums.end());
        long long score=0;

        while(k--){
           // long long x=hp.top();
           // hp.pop();
            score+=hp.top();
           // x=ceil(x/3);
            hp.push(ceil(hp.top()/3));
            hp.pop();

        }
        return score;

    }
};