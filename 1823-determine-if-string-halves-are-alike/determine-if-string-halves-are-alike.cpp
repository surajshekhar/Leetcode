class Solution {
    bool isVowel(char ch){
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u') return true;
        return false;
    }
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        string firstHalf=s.substr(0,n/2);
        string secondHalf=s.substr(n/2);
        int fh=0;
        int sh=0;
        for(char ch: firstHalf) if(isVowel(ch)) fh++;
        for(char ch: secondHalf) if(isVowel(ch)) sh++;

        if(fh==sh) return true;
        return false;
    }
};