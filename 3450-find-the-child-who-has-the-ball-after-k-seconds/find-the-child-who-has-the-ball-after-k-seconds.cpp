class Solution {
public:
    int numberOfChild(int n, int k) {
        int i=0; // i indicate current position
        int p=0; // direction
        while(k--){
            if(i==0)p=1;
            if(i==n-1)p=-1;
            i+=p;
        }
        return i;
    }
};