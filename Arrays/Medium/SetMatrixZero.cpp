// https://leetcode.com/problems/set-matrix-zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int col0 = 1; // Change: Initialize col0 to 1
        int ms = m.size();
        int n = m[0].size();

        // First pass: mark zeros on the first row and column
        for (int i = 0; i < ms; i++) { // Change: Loop over rows
            if (m[i][0] == 0) col0 = 0; // Change: Correct handling for first column
            for (int j = 1; j < n; j++) { // Change: Loop over columns starting from 1
                if (m[i][j] == 0) {
                    m[i][0] = 0;
                    m[0][j] = 0;
                }
            }
        }

        // Second pass: use the marks to set elements to zero
        for (int i = 1; i < ms; i++) { // Change: Loop over rows starting from 1
            for (int j = 1; j < n; j++) { // Change: Loop over columns starting from 1
                if (m[i][0] == 0 || m[0][j] == 0) {
                    m[i][j] = 0;
                }
            }
        }

        // Check if the first row needs to be set to zero
        if (m[0][0] == 0) {
            for (int j = 0; j < n; j++) {
                m[0][j] = 0;
            }
        }

        // Check if the first column needs to be set to zero
        if (col0 == 0) {
            for (int i = 0; i < ms; i++) { // Change: Loop over rows
                m[i][0] = 0;
            }
        }
    }
};
