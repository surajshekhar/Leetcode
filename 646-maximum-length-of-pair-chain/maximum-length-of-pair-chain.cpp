class Solution {
public:
   static bool cmp(const vector<int>&v1,const vector<int>&v2){
        return v1[1]<v2[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        //vector<pair<int,int>>nums;
        sort(pairs.begin(),pairs.end(),cmp);
        int prev=0;
        int cnt=1;
        for(int i=1;i<pairs.size();i++){
            if(pairs[i][0]>pairs[prev][1])prev=i,cnt++;
        }
        return cnt;
        
        
    }
};