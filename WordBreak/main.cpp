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

#include <unordered_set>
using std::unordered_set;

class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &dict) {
        // write your code here
		int lenS = s.length();
		int sizeD = dict.size();
		
		if (lenS == 0) {
			return true;
		} else if (sizeD == 0) {
			return false;
		}
		
		int lenMax = 0;
		vector<bool> f(lenS + 1, false);
		
		f[0] = true;
		dict.insert(string(""));
		for (auto &e : dict) {
			lenMax = max(lenMax, (int)e.length());
		}
		for (int i = 1; i <= lenS; ++i) {
			for (int j = 1; j <= i && j<= lenMax; ++j) {
				f[i] = f[i - j] && dict.find(s.substr(i - j, j)) != dict.end();
				if (f[i]) break;
			}
		}
		
		return f.back();
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	unordered_set<string> dict = {"abc"};
	
	cout << solution.wordBreak("", dict) << endl;
	
	return 0;
}