class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st;
        for(auto x:allowed){
            st.insert(x);

        }
        int count =0;
        for(auto it:words){
            int check=1;
            for(int i=0;i<it.size();i++){
                if(st.find(it[i])==st.end()){
                    check=-1;
                    break;
                }

                

            }
            if(check==1){
               count++;
            }
        }
        return count;
    }
};