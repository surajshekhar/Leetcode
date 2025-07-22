class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dip=prices[0];
        int bull=0;
        for(int i=1;i<prices.size();i++){
            if(dip>prices[i]){
                dip=prices[i];//buy if lower than current
            }
            bull=max(bull,prices[i]-dip);//current profit
        }
        return bull;
    }
};