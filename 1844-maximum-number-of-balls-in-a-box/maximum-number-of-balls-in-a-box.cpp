class Solution {
public:
    int countBalls(int lowlimit, int highlimit) {
        unordered_map<int,int>mp;
    
        int cnt=0;
        for(int i =lowlimit;i<=highlimit;i++){
            int sum =0,num=i;
            while(num){
                sum+=num%10;
                num=num/10;

            }
            mp[sum]++;
            cnt=max(cnt,mp[sum]);



        }
        return cnt;
    }
};