#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

class Solution {

public:

    /**

     * @param matrix, a list of lists of integers

     * @param target, an integer

     * @return a boolean, indicate whether matrix contains target

     */

    bool searchMatrix(vector<vector<int> > &matrix, int target) {

        // write your code here
		if (matrix.empty() || matrix.front().empty()) {
			return false;
		}
		
		int upper = matrix.size() - 1;
		int lower = 0;
		int targetRow = 0;
		
		// 1. find first row that has first element greater than or equal to target
		while (lower != upper) {
			
			int mid = lower + ((upper - lower + 1) >> 1);
			
			if (matrix[mid].front() <= target) {
				lower = mid;
			} else {
				upper = mid - 1;
			}
		}
		
		if(matrix[targetRow].front() > target) {
			return false;
		}
		
		// 2. find target in target row
		targetRow = upper;
		upper = matrix.front().size() - 1;
		lower = 0;
		
		while (lower != upper) {
			
			int mid = lower + ((upper - lower + 1) >> 1);
			
			if (matrix[targetRow][mid] > target) {
				upper = mid - 1;
			} else {
				lower = mid;
			}
		}
		
		return (matrix[targetRow][upper] == target);
    }

};


int main(int argc, char **argv)
{
	Solution solution;
	vector< vector< int > > vii = {
		{ 1, 3, 5, 7, }, 
		{ 10, 11, 16, 20, }, 
		{ 23, 30, 34, 50, }, 
	};
	int target = 9;
	
	cout << solution.searchMatrix(vii, target) << endl;
	
	return 0;
}
