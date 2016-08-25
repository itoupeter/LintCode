#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;
using std::max;

class returnType {
public:
	returnType(int height = 0, bool isBalanced = false) {
		this->height = height;
		this->isBalanced = isBalanced;
	}
	
	int height;
	bool isBalanced;
};

class Solution {
public:
    bool isBalanced(TreeNode *root) {
		
        // write your code here
		returnType result = helper(root);
		
		return result.isBalanced;
    }
private:
	returnType helper(TreeNode *root) {
		
		if (root == nullptr) {
			return returnType(1, true);
		}
		
		returnType left = helper(root->left);
		returnType right = helper(root->right);
		
		if (!left.isBalanced || !right.isBalanced 
				|| left.height - right.height > 1 
				|| left.height - right.height < -1) {
			return returnType(0, false);
		}
		
		return returnType(max(left.height, right.height) + 1, true);
	}
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}