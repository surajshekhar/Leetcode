class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = mean * (n + m) - accumulate(rolls.begin(), rolls.end(),0);
        if (sum < n || sum > n * 6) return vector<int>();

        vector<int> result(n);
        int val = sum / n;
        int rem = sum % n;
        if (rem) fill(result.begin(), result.begin() + rem + 1, val + 1);
        fill(result.begin() + rem, result.end(), val);
        return result;    
    }
};