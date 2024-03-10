class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          map<int,int>m;
          
          map<int,int>result;
          vector<int>ans;

          for(int i=0;i<nums1.size();i++)
          m[nums1[i]]++;


          for(int i=0;i<nums2.size();i++)
          {
              if(m.find(nums2[i])!=m.end())
               result[nums2[i]]++;
          }

          for(auto i:result)
          {
              ans.push_back(i.first);
          }

          return ans;
       
        
        
        /*
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
             if(nums1[i]==nums2[j] ){
                 s.insert(nums1[i]);
                 i++;
                 j++;
            }else if(nums1.size()>nums2.size()){
                i++;
            }
            else if(nums1.size()<nums2.size()){
                j++;
            }
            else if(nums1.size()==nums2.size()){
                i++;
                j++;


            }
           



        } 
        for(auto it:s){
                ans.push_back(it);
        }
        return ans;
       
        */


      
        
    }
};