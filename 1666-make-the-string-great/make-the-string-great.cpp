class Solution {
public:
    string makeGood(string s) {
        string var="";
       // if(s.size()<2)return s;
       // while(s.length!=0 || )
        for (char i :s) {
            if (!var.empty() && abs(var.back()-i) == 32) {
                //s.erase(i, 2);
                var.pop_back();
            }
            else{
                var+=i;
            }
        }
        return var;
    }
};