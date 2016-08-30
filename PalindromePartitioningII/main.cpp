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
    int minCut(string s) {
		
		if (s.empty()) {
			return 0;
		}

		int lenS = s.length();
		vector<vector<bool>> g(lenS, vector<bool>(lenS + 1, false));
		vector<int> f(lenS + 1, INT_MAX >> 1);
		
		preprocess(s, g);
		f[0] = 0;
		for (int i = 1; i <= lenS; ++i) {
			for (int j = 0; j < i; ++j) {
				f[i] = min(f[i], g[j][i - j] ? f[j] + 1 : INT_MAX);
			}
		}
		
		return f.back() - 1;
    }
private:
	void preprocess(const string &s, vector<vector<bool>> &g) {
		
		int n = g.size();
		
		for (auto &v : g) {
			v[0] = v[1] = true;
		}
		for (int i = 2; i <= n; ++i) {
			for (int j = 0; j + i <= n; ++j) {
				g[j][i] = g[j + 1][i - 2] && s[j] == s[j + i - 1];
			}
		}
	}
};

int main(int argc, char **argv){
	
	Solution solution;
	string s = "abbddc";
	
	cout << solution.minCut(s) << endl;
	
	return 0;
}