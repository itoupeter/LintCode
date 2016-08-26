#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        // write your code here
		if (grid.empty() || grid.front().empty()) {
			return 0;
		}
		
		int m = grid.size();
		int n = grid.front().size();
		
		for (int i = 1; i < m; ++i) {
			grid[i][0] += grid[i - 1][0];
		}
		for (int j = 1; j < n; ++j) {
			grid[0][j] += grid[0][j - 1];
		}
		for (int i = 1; i < m; ++i) {
			for (int j = 1; j < n; ++j) {
				grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
			}
		}
		
		return grid.back().back();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}