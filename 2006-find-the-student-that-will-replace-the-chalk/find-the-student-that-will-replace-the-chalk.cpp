class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // k-11 11 jb tk k!=0
        // 25-10= 
        //15-10=5
        //k<sum 
        
        long long sum=accumulate(chalk.begin(),chalk.end(),0LL);
        long long remaining =k%sum;
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]>remaining){
                return i;
            }
            remaining -=chalk[i];
        }
        return 0;

    
    }
};
