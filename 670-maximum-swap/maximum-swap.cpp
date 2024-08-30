class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int maxidx=-1,maxdigit = -1,lefti=-1,righti=-1;
        for (int i=s.size() - 1; i >= 0; --i) {
            if (s[i]>maxdigit){
                maxdigit=s[i];//finding max ele 

                maxidx=i;//max ele index
            }
            if (s[i]<maxdigit) {
                lefti=i;
                righti=maxidx;
            }
        }
        if (lefti==-1) return num;
        swap(s[lefti],s[righti]);
        return stoi(s);
    }
};