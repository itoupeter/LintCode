#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int uniquePaths(int m, int n) {
        // wirte your code here
		if (m <= 0 || n <= 0) {
			return 0;
		}
		
		int **f = new int*[m];
		
		for (int i = 0; i < m; ++i) {
			f[i] = new int[n];
			f[i][0] = 1;
		}
		for (int i = 0; i < n; ++i) {
			f[0][i] = 1;
		}
		
		for (int i = 1; i < m; ++i) {
			for (int j = 1; j < n; ++j) {
				f[i][j] = f[i - 1][j] + f[i][j - 1];
			}
		}
		
		return f[m - 1][n - 1];
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	cout << solution.uniquePaths(3, 4) << endl;
	
	return 0;
}