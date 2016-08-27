#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    bool canJump(vector<int> A) {
        // write you code here
		if (A.empty()) {
			return false;
		}
		
		int n = A.size();
		int maxReach = 0;
		
		for (int i = 0; i < n; ++i) {
			if (i > maxReach) {
				return false;
			} else {
				maxReach = max(maxReach, i + A[i]);
			}
		}
		
		return true;
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	return 0;
}