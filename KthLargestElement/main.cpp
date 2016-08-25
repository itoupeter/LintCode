#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::swap;

class Solution {
public:
    int kthLargestElement(int k, vector<int> nums) {

        // write your code here
		if (nums.empty() || k < 1 || k > nums.size()) {
			return -1;
		}
		
		return helper(nums, 0, nums.size() - 1, k);
    }
	
private: 
	int helper(vector<int> &nums, int s, int t, int k) {
		
		int position = partition(nums, s, t);
		
		if (position + 1 == k) {
			return nums[position];
		} else if (position + 1 > k) {
			return helper(nums, s, position - 1, k);
		} else {
			return helper(nums, position + 1, t, k);
		}
	}
	
	int partition(vector<int> &nums, int s, int t) {
		
		int pivot = nums[s];
		
		while (s < t) {
			while (s < t && nums[t] <= pivot) --t;
			nums[s] = nums[t];
			while (s < t && nums[s] >= pivot) ++s;
			nums[t] = nums[s];
		}
		
		nums[s] = pivot;
		return s;
	}
};

int main(int argc, char **argv){
	
	Solution solution;
	vector<int> array = {9, 3, 2, 4, 8};
	int k = 1;
	
	cout << solution.kthLargestElement(k, array) << endl;
	
	return 0;
}