class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        map<int, int> freq;
        int minVal = INT_MAX;

        for (int a : basket1) {
            freq[a]++;
            minVal = min(minVal, a);
        }
        for (int b : basket2) {
            freq[b]--;
            minVal = min(minVal, b);
        }

        vector<int> excess;
        for (auto& [val, count] : freq) {
            if (count % 2 != 0) return -1;
            for (int i = 0; i < abs(count) / 2; ++i) {
                excess.push_back(val);
            }
        }

        sort(excess.begin(), excess.end());
        long long cost = 0;
        for (int i = 0; i < excess.size() / 2; ++i) {
            cost += min((long long)excess[i], 2LL * minVal);
        }

        return cost;
    }
};