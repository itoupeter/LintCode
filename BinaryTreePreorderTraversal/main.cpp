#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {

        // write your code here
		vi.clear();
		helper(root);
		
		return vi;
    }
private:
	void helper(TreeNode *root) {
		
		if (root == nullptr) {
			return;
		}
		
		vi.push_back(root->val);
		helper(root->left);
		helper(root->right);
	}
	
	vector<int> vi;
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}