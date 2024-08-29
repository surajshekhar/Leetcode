class Solution {
public:
    int numRabbits(vector<int>& arr) {
        
        unordered_map<int, int> check;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                ans+=1;
                continue;
            }
            if(check[arr[i]]==0)
            {
                check[arr[i]] = arr[i];
                ans+=1;
                ans+=arr[i];
            }
            else
            {
                check[arr[i]]--;
            }
        }
        return ans;
    }
};