#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::min;
using std::max;

class Solution {
public:
    int jump(vector<int> A) {
        // wirte your code here
		if (A.empty()) {
			return 0;
		}
		
		int n = A.size();
		int maxReach = 0;
		vector<int> f(n, INT_MAX);
		
		f[0] = 0;
		for (int i = 0; i < n; ++i) {
			if (i > maxReach) {
				return 0;
			}
			for (int j = maxReach + 1; j < n && j <= i + A[i]; ++j) {
				f[j] = min(f[j], f[i] + 1);
			}
			maxReach = max(maxReach, i + A[i]);
		}
		
		return f.back();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	vector<int> arr = {1, 1, 1, 1, 2};
	cout << solution.jump(arr) << endl;
	
	return 0;
}