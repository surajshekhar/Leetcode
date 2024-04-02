class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>mps,mpt;
       
        if(s.size()!=t.size())return 0;
        // for(auto it:s){
        //     mps[it]++;
        // }
        // for(auto i:t){
        //     mpt[i]++;

        // }
        for(int i=0;i<s.size();i++){
            if(mps.find(s[i])!=mps.end()){
                if(mps[s[i]]!=t[i]){
                    return 0;
                }

            }
            else if(mpt.find(t[i])!=mpt.end()){
                if(mpt[t[i]]!=s[i]){
                    return 0;
                }
            }

            //mapping each char to char
            else{
            mps[s[i]]=t[i];
            mpt[t[i]]=s[i];
            }
      
        }
        return true;
      
        // if(s.length()!=t.length()){
        //     return false;
        // }
        // for(auto i:s){
        //     mps[i]++;

        // }
        // for(auto i:t){
        //     mpt[i]++;    
        // }
        // for(int i=0;i<s.size())
        
    }
};