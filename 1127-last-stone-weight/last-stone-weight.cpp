class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        int n = s.size();
        priority_queue<int> heap;
        for(int i=0;i<n;i++){
            heap.push(s[i]);
        }
        while(n>0){
            int first_max = heap.top();
            heap.pop();
            int second_max = heap.top();
            heap.pop();
            n-=2;
            if(first_max - second_max > 0){
                heap.push(first_max - second_max);
                n+=1;
            }
        }
        if(!heap.empty()) return heap.top();
        else return 0;
    }
};