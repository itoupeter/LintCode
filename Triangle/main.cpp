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
    int minimumTotal(vector<vector<int> > &triangle) {
        // write your code here
		if (triangle.empty()) {
			return 0;
		}
		
		int n = triangle.size();
		
		for (int i = 0; i < n - 1; ++i) {
			for (int j = 0; j < n - 1 - i; ++j) {
				triangle[n - 2 - i][j] += min(
						triangle[n - 1 - i][j], 
						triangle[n - 1 - i][j + 1]);
			}
		}
		
		return triangle.front().front();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}