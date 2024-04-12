class Solution {
public:
    int secondHighest(string s) {
        set<int> ans;
        for(auto i : s){
            if(i>='0' && i<='9'){
                ans.insert(i-'0');
            }
        }
        if(ans.size() < 2)
		    return -1;
    	auto resIt = ans.rbegin();
	    return *(++resIt);
    }
};