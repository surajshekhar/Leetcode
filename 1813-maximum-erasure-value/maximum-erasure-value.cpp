class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> hash;
        int n = nums.size();
        int l = 0, r = 0;
        int sum = 0, maxi = 0;

        while (r < n) {
            sum += nums[r]; 
            hash[nums[r]]++; 

            
            while (hash[nums[r]] > 1) {
                sum -= nums[l];
                hash[nums[l]]--;
                if (hash[nums[l]] == 0) {
                    hash.erase(nums[l]); 
                }
                l++;
            }

            maxi = max(maxi, sum);
            r++;
        }

        return maxi;
    }
};