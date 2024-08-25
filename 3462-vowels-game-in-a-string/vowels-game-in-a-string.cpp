class Solution {
public:
    bool doesAliceWin(string s) {
        
        unordered_set<char> vowels ={'a','e','i','o','u'};
        int countvoe=0;
        for(auto c:s){
            if(vowels.find(c)!=vowels.end())
            countvoe++;

        }
        if(countvoe>=1)return true;
        return false;

    }
};