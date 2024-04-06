class Solution {
public:
    typedef long long int lll;
    int nthUglyNumber(int n) {
        priority_queue<lll,vector<lll>,greater<lll>> minh;
        
        minh.push(1);
       if(n==1)    return 1;
        while(n!=1){
            lll temp=minh.top();
            minh.pop();
            if(temp%2==0){
                minh.push(temp*2);
            }
            else if(temp%3==0){
                minh.push(temp*2);
                minh.push(temp*3);
            }
            else{
                minh.push(temp*2);
                minh.push(temp*3);
                minh.push(temp*5);
            }            
            n--;
        }
        return minh.top();
    }
};