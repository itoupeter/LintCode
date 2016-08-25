#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::max;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};

class Solution {
public:
    int maxDepth(TreeNode *root) {
        // write your code here
		if (root == nullptr) {
			return 0;
		}
		
		int leftDepth = maxDepth(root->left);
		int rightDepth = maxDepth(root->right);
		
		return max(leftDepth, rightDepth) + 1;
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	TreeNode *root = new TreeNode(0);
	
	root->left = new TreeNode(1);
	root->right = new TreeNode(2);
	root->right->left = new TreeNode(3);
	
	cout << solution.maxDepth(root) << endl;
	
	return 0;
}