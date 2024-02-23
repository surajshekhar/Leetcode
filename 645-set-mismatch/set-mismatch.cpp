class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> s;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                s.push_back(nums[i]);
            }
            else{
                st.insert(nums[i]);

            }
            
        }
        for(int i=1;i<=nums.size();i++){
            if(st.find(i)==st.end()){
               // s.push_back(i-1);
                s.push_back(i);
                break;
            }

        }
   
        return s;
        

        
    }
};