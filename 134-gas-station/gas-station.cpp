class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int currgas=0;
        int totalgas=0;
        int totalcost=0;
        int currstation=0;
        for(int i=0;i<n;i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
            currgas+=gas[i]-cost[i];//current travelling gas
            if(currgas<0){
                //gas>cost
                currstation=i+1;
                currgas=0;
            }
            
        }
        if(totalgas-totalcost<0)return -1;
        return currstation;
    }
};