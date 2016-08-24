#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int binarySearch(vector<int> &array, int target) {

        // write your code here
		if (array.empty()) {
			return -1;
		}
		
		int upper = array.size() - 1;
		int lower = 0;
		
		// 1. find first element greater than or equal to target
		while (lower != upper) {
			
			int mid = lower + ((upper - lower) >> 1);
			
			if (array[mid] < target) {
				lower = mid + 1;
			} else {
				upper = mid;
			}
		}

        return array[upper] == target ? upper: -1;
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	vector<int> array = { 2, 4, 6, 8 };
	int target = 9;
	
	cout << solution.binarySearch(array, target) << endl;
	
	return 0;
}