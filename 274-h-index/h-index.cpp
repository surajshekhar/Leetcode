class Solution {
public:
    int hIndex(vector<int>& citi) {
        sort(citi.begin(),citi.end(),greater<int>());
        int ans=0;
        //if()
        for(int i=0;i<citi.size();i++){
            if(citi[i]>=i+1){
                ans=i+1;
            }
            else{
                break;
            }

        }
        return ans;
    }
};