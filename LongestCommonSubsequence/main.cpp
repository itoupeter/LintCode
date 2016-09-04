#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::max;
using std::min;

class Solution {
public:
    int longestCommonSubsequence(string A, string B) {
        // write your code here
		if (A.empty() || B.empty()) {
			return 0;
		}
		
		int lenA = A.length();
		int lenB = B.length();
		vector<vector<int>> f(lenA + 1, vector<int>(lenB + 1, 0));
		
		for (int i = 1; i <= lenA; ++i) {
			for (int j = 1; j <= lenB; ++j) {
				if (A[i - 1] == B[j - 1]) {
					f[i][j] = f[i - 1][j - 1] + 1;
				} else {
					f[i][j] = max(f[i - 1][j], f[i][j - 1]);
				}
			}
		}
		
		return f.back().back();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}