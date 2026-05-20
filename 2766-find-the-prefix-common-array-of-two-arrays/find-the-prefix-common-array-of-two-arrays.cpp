class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        int n=A.size();
        vector<int>ans(n);
        int curr=0;
        for(int i=0;i<n;i++){
            if(++mp[A[i]]==2)curr++;
            if(++mp[B[i]]==2)curr++;
            ans[i]=curr;
        }
        return ans;
    }
};