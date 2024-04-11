class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        int cnt=0;
        for(int i :s){
            mp[i]++;
        }
        for(int x:t){
            if(mp.find(x)==mp.end()){
                cnt++;
            }
            else{
                mp[x]--;
                if(mp[x]==0){
                    mp.erase(x);
                }
            }
        }
        return cnt;

    }
};