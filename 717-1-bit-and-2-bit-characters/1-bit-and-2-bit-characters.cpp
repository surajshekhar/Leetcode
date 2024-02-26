class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int ans=0;
        int i=0;
        while(i<bits.size()){
            if(bits[i]==1){
                ans=0;
                i+=2;
            }
            else{
                ans=1;
                i++;
            }

        }
        return ans;
    }
};