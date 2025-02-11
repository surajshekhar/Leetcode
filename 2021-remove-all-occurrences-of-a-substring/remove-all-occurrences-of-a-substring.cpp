class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());//erase untill lenght of part from
            // part starting index

        }
        return s;
    }
};
