class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    
        int unplaced = 0;
        int n = fruits.size();

        for (int i = 0; i < n; ++i) {
            bool placed = false;

            // Try to place current fruit in the first available basket
            for (int j = 0; j < n; ++j) {
                if (baskets[j] >= fruits[i]) {
                    baskets[j] = -1;  // Mark basket as used
                    placed = true;
                    break;
                }
            }

            if (!placed) {
                unplaced++; // This fruit couldn’t be placed
            }
        }

        return unplaced;
    }
};
        
    