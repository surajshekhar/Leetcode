class Solution {
public:
    int kthFactor(int n, int k) {

        // the max factor could be n/2 except the no
        // int d=1;
        // for(;d*d<=n;++d){
        //     return d;
        // }
        // for(d=d-1;d>=1;--d){
        //     if(d*d==n){
        //         continue;
        //     }
        //     if(n%d==0 && --k==0)
        //     return n/d;
            
        // }
        // return -1;
        for(int d=1; d<=n/2;++d){
            if(n%d==0 && --k ==0){
                return d;

            }
           
        }
         return k==1?n:-1;



    }
};