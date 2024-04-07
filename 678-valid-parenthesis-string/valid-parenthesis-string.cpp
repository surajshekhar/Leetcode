class Solution {
public:
    bool checkValidString(string s) {
        int cnts=0;
        int cnto=0;
        for(char i:s){
            if(i=='('){
                cnts++;
                cnto++;

            }
            else if(i==')'){
                cnts--;
                cnto--;

            }
            else{
                cnts++;
                cnto--;
                
            }
            if(cnts<0)return false;
            if(cnto<0)cnto=0;



        }
        return cnto==0;
        
    }
};