#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int nrow = matrix.size();
        int ncol = matrix[0].size();
        int n = nrow * ncol;
        int count = 0;
        
        // Indices for the boundaries
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = nrow - 1;
        int endingcol = ncol - 1;
        
        while(count < n){
            // Print starting row
            for(int i = startingcol; count < n && i <= endingcol; i++) {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            
            // Print ending column
            for(int i = startingrow; count < n && i <= endingrow; i++) {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;
            
            // Print ending row
            for(int i = endingcol; count < n && i >= startingcol; i--) {
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            
            // Print starting column
            for(int i = endingrow; count < n && i >= startingrow; i--) {
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }
        
        return ans;
    }
};

int main() {
    // Example 2D matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    Solution sol;
    vector<int> result = sol.spiralOrder(matrix);
    
    // Print the result
    for(int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
