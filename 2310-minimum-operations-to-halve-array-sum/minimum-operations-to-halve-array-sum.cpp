class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> hp;
        // while(k--){
        //     double x=hp.top();
        //     hp.pop();
        //     hp.push(x/2);
        // yaha cnt 1 ke waje se fss rha tha

        // }
        //double sum = accumulate(nums.begin(), nums.end(), 0);
        // cout<<sum;
        double sum=0;
        for(auto i:nums){
            sum+=i;
            hp.push(i);
        }
        int cnt = 0;
        double half = sum / 2;
        //  cout<<half;
        while (sum > half) {
            double x = hp.top();
            hp.pop();
            x = x / 2;
            hp.push(x);
            cnt++;
            sum -= x; // use element ka half hata de tb tk jb total ka half nhi
                      // hota
        }
        return cnt;
    }
};