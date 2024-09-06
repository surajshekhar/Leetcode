class Solution {
public:
    int minMoves(int target, int maxDoubles) {

          int count = 0;
        while(maxDoubles>0){
            if(target == 1) return count;
            if(target%2!=0){
                target=target-1;
            }
            else{
                target = target/2;
                maxDoubles--;
            }

            count++;
        }
        count+=(target-1);
        return count;

    }
};