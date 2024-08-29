class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=-1;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2])
            maxi=max(maxi,stoi(num.substr(i,3)));
        }
        if(maxi==0)
        return "000";
        if(maxi!=-1)
        return to_string(maxi);
        return "";
    }
};