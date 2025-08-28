class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
    
        unordered_map<int, vector<int>> diagonalMap;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                diagonalMap[r - c].push_back(mat[r][c]);
            }
        }

        for (auto &entry : diagonalMap) {
            sort(entry.second.begin(), entry.second.end());
        }

        for (int r = rows - 1; r >= 0; r--) {
            for (int c = cols - 1; c >= 0; c--) {
                mat[r][c] = diagonalMap[r - c].back();
                diagonalMap[r - c].pop_back();
            }
        }
        
        return mat;
    }
};