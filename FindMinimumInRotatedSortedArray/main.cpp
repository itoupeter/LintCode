#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int findMin(vector<int> &nums) {

        // write your code here
		if (nums.empty()) {
			return -1;
		}
		
		int upper = nums.size() - 1;
		int lower = 0;
		
		// 1. binary search for the minimum
		while (lower != upper) {
			
			int mid = lower + ((upper - lower) >> 1);
			
			if (nums[mid] < nums[upper]) {
				upper = mid;
			} else {
				lower = mid + 1;
			}
		}
		
		return nums[upper];
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	vector<int> array = { 6, 8, 0, 2, 4 };
	
	cout << solution.findMin(array) << endl;
	
	return 0;
}