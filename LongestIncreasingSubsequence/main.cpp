#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int longestIncreasingSubsequence(vector<int> nums) {
        // write your code here
		if (nums.empty()) {
			return 0;
		}
		
		int result = 0;
		int n = nums.size();
		vector<int> f(n, 1);
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < i; ++j) {
				if (nums[j] >= nums[i]) {
					continue;
				}
				f[i] = max(f[i], f[j] + 1);
			}
			result = max(result, f[i]);
		}
		
		return result;
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}