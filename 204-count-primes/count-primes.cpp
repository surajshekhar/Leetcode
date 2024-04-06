class Solution {
public:

    int countPrimes(int n) {
        vector<bool> v(n,true);
        if(v.size()<3)return 0;
        // Set number 0 & 1 as FALSE
        v[0]=v[1]=false;
        // Since only 1 prime is less than 3 ,set count =1
        int count =1;
        // we are not checking for even numbers as we know
        // all even numbers are not prime except 2
        for(int i=3;i<n;i+=2){
            if(v[i]){
                count++;
                // only updating odd multiples of i
                for(int j= i*3 ; j<n ; j=j+i+i){
                    v[j]=false;
                }
            }

        }
        
        return count;
    }
};