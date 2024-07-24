#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(); 
        int m = matrix[0].size();
        vector<int> col(m, 0);
        vector<int> row(n, 0);

        // First pass to find zeroes and mark corresponding rows and columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Second pass to set the corresponding rows and columns to zero
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
