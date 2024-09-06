class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int n = skills.size();
        int win = 0;
        int streak = 0;
        for (int i = 1; i < n; i++) {
            if (skills[win] < skills[i]) {
                win= i;//initial index

                streak = 1;//reset if initial winner doensnt continue
            } else {
                streak++;
            }
            if (streak == k) {
                return win;//an index has is greater k consecutive values
            }
        }
        return win;
    }
};