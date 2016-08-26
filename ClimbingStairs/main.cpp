#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int climbStairs(int n) {
        // write your code here
		if (n < 0) {
			return 0;
		} else if (n <= 1) {
			return 1;
		}
		vector<int> vi(n + 1, 0);

		vi[0] = vi[1] = 1;
		for (int i = 2; i < n + 1; ++i) {
			vi[i] = vi[i - 2] + vi[i - 1];
		}
		
		return vi.back();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	cout << solution.climbStairs(0) << endl;
	
	return 0;
}