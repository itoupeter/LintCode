#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::max;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // write your code here
		if (obstacleGrid.empty() || obstacleGrid.front().empty()
				|| obstacleGrid.front().front() == 1) {
			return 0;
		}
		
		int m = obstacleGrid.size();
		int n = obstacleGrid.front().size();
		
		for (auto &v : obstacleGrid) {
			for (auto &i : v) {
				i = -i;
			}
		}
		obstacleGrid.front().front() = 1;
		
		for (int i = 1; i < m; ++i) {
			if (obstacleGrid[i][0] < 0) continue;
			obstacleGrid[i][0] += max(obstacleGrid[i - 1][0], 0);
		}
		for (int i = 1; i < n; ++i) {
			if (obstacleGrid[0][i] < 0) continue;
			obstacleGrid[0][i] += max(obstacleGrid[0][i - 1], 0);
		}
		for (int i = 1; i < m; ++i) {
			for (int j = 1; j < n; ++j) {
				if (obstacleGrid[i][j] < 0) continue;
				obstacleGrid[i][j] += max(obstacleGrid[i - 1][j], 0);
				obstacleGrid[i][j] += max(obstacleGrid[i][j - 1], 0);
			}
		}
		
		return max(obstacleGrid.back().back(), 0);
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	vector<vector<int>> vii = {
		{ 0, 0, 0, }, 
		{ 0, 1, 0, }, 
		{ 0, 0, 0, }, 
	};
	
	cout << solution.uniquePathsWithObstacles(vii) << endl;
	
	return 0;
}