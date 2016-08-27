#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::max;
using std::min;

#include <string>
using std::string;

class Solution {
public:
    int numDistinct(string &S, string &T) {
        // write your code here
		int lenS = S.length();
		int lenT = T.length();
		
		if (lenS < lenT) {
			return 0;
		}
		
		vector<vector<int>> f(lenS + 1, vector<int>(lenT + 1, 0));
		
		for (int i = 0; i < lenS; ++i) {
			f[i][0] = 1;
		}
		for (int i = 1; i <= lenS; ++i) {
			for (int j = 0; j <= i && j <= lenT; ++j) {
				if (S[i - 1] == T[j - 1]) {
					f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
				} else {
					f[i][j] = f[i - 1][j];
				}
			}
		}
		
		return f.back().back();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	string s = "rabbbit";
	string t = "rabbit";
	
	cout << solution.numDistinct(s, t) << endl;
	
	return 0;
}