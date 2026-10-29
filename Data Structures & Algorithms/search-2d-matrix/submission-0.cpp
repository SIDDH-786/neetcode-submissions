class Solution {
public:
    bool binarysearch(vector<vector<int>>& matrix,
                      int low, int high, int target, int row) {

        if (low > high) {
            return false;
        }

        int mid = low + (high - low) / 2;

        if (matrix[row][mid] == target) {
            return true;
        }
        else if (matrix[row][mid] > target) {
            return binarysearch(matrix, low, mid - 1, target, row);
        }
        else {
            return binarysearch(matrix, mid + 1, high, target, row);
        }
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            if (binarysearch(matrix, 0, m - 1, target, i)) {
                return true;
            }
        }

        return false;
    }
};