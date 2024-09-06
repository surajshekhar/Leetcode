class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        map<pair<int,int>,int>mp;
        for(auto v:pick){
            mp[{v[0],v[1]}]++;

        }
        set<int>st;
        for(auto it:mp){
            if(it.second>it.first.first){
                st.insert(it.first.first);//jisne jita

            }
        }
        return st.size();//kis kis ne jita

    }
};