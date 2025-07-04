class Solution {
public:
    char kthCharacter(long long k, std::vector<int>& operations) {
        int res = 0;
        int bitIndex;
        while (k != 1) {
            bitIndex = 63 - __builtin_clzll(k);
            if ((1LL << bitIndex) == k) {
                bitIndex--;
            }
            k -= (1LL << bitIndex);
            if (operations[bitIndex] != 0) {
                res++;
            }
        }
        return 'a' + (res % 26);
    }
};