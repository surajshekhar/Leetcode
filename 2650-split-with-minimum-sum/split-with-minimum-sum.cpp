class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num),s1="",s2="";
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i+=2){
            s1+=s[i];
            s2+=s[i+1];
        }
        int num1=stoi(s1),num2=stoi(s2);
        return num1+num2;
    }
};