#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int minDistance(string word1, string word2) {
		
		int l1 = word1.length();
		int l2 = word2.length();
		
		if (word1.empty() || word2.empty()) {
			return max(l1, l2);
		}
		
		vector<vector<int>> f(l1 + 1, vector<int>(l2 + 1, INT_MAX));
		
		for (int i = 0; i < l1 + 1; ++i) {
			f[i][0] = i;
		}
		for (int j = 0; j < l2 + 1; ++j) {
			f[0][j] = j;
		}
		for (int i = 1; i <= l1; ++i) {
			for (int j = 1; j <= l2; ++j) {
				if (word1[i - 1] == word2[j - 1]) {
					f[i][j] = f[i - 1][j - 1];
				} else {
					f[i][j] = min(f[i - 1][j] + 1, f[i][j - 1] + 1);
					f[i][j] = min(f[i][j], f[i - 1][j - 1] + 1);
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