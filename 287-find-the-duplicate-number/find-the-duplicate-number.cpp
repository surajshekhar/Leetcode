class Solution {
public:
    int findDuplicate(vector<int>& v) {
        sort(v.begin(),v.end());
        int c;
      
        for(int i=0;i<v.size();i++){
            if(v[i]==v[i+1]){

                c=v[i];
                break;

            }
            
        }
        return c;


        
    }
};