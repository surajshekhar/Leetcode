class Solution {
public:
    int minimumChairs(string s) {
        //chair--
        //l chair+
        int c=0;
        int m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                c++;
            }
            else if(s[i]=='L'){
                c--;
            }
            if(c>m){
                m=c;
            }
        }
        return m;
    }
};