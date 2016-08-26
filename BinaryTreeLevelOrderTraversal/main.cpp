#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        // write your code here
		vii.clear();
		helper(root, 0);
		
		return vii;
    }
private:
	void helper(TreeNode *root, int level) {
		
		if (root == nullptr) {
			return;
		}
		
		if (vii.size() < level + 1) {
			vii.push_back(vector<int>());
		}
		
		vii[level].push_back(root->val);
		helper(root->left, level + 1);
		helper(root->right, level + 1);
	}
	
	vector<vector<int>> vii;
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}