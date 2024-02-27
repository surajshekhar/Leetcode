class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        uint32_t cur = 1 << 31;
        while (n) {
            if (n & 1) ans += cur;
            cur = cur >> 1;
            n = n >> 1;
        }
        return ans;
    }
};