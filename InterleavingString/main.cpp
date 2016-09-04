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
    bool isInterleave(string s1, string s2, string s3) {
        // write your code here
		if (s1.empty() && s2.empty()) {
			return s3.empty();
		} else if (s1.empty()) {
			return s2 == s3;
		} else if (s2.empty()) {
			return s1 == s3;
		} else if (s1.length() + s2.length() != s3.length()) {
			return false;
		}
		
		int len1 = s1.length();
		int len2 = s2.length();
		int len3 = s3.length();
		vector<vector<bool>> f(len1 + 1, vector<bool>(len2 + 1, false));
		
		f[0][0] = true;
		for (int i = 1; i <= len1; ++i) {
			f[i][0] = f[i - 1][0] && s1[i - 1] == s3[i - 1];
		}
		for (int j = 1; j <= len2; ++j) {
			f[0][j] = f[0][j - 1] && s2[j - 1] == s3[j - 1];
		}
		for (int i = 1; i <= len1; ++i) {
			for (int j = 1; j <= len2; ++j) {
				f[i][j] = f[i][j] || (f[i - 1][j] && s1[i - 1] == s3[i + j - 1]);
				f[i][j] = f[i][j] || (f[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
			}
		}
		
		return f.back().back();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}