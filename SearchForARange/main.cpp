#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    vector<int> searchRange(vector<int> &A, int target) {

        // write your code here
		if (A.empty()) {
			return vector<int>{-1, -1};
		}
		
		int upper = A.size() - 1;
		int lower = 0;
		int targetHead = 0;
		
		// 1. find first element equal to target
		while (lower != upper) {
			
			int mid = lower + ((upper - lower) >> 1);
			
			if (A[mid] >= target) {
				upper = mid;
			} else {
				lower = mid + 1;
			}
		}
		
		targetHead = upper;
		
		// in case of target doesn't exist
		if (A[upper] != target) {
			return vector<int>{-1, -1};
		}
		
		// 2. find last element equal to target
		upper = A.size() - 1;
		lower = 0;
		
		while (lower != upper) {
			
			int mid = lower + ((upper - lower + 1) >> 1);
			
			if (A[mid] > target) {
				upper = mid - 1;
			} else {
				lower = mid;
			}
		}
		
		return vector<int>{targetHead, upper};
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	vector<int> array = {1, 2, 4, 4, 4, 5, 5, 6};
	int target = 5;
	vector<int> result = solution.searchRange(array, target);
	
	for (int i : result) {
		cout << i << endl;
	}
	
	return 0;
}