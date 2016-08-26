#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

#include <climits>

class returnType {
public:
	returnType(bool isValid = true, int min = INT_MIN, int max = INT_MAX) {
		this->max = max;
		this->min = min;
		this->isValid = isValid;
	}
	
	int max;
	int min;
	bool isValid;
};

class Solution {
public:
    bool isValidBST(TreeNode *root) {
        // write your code here
		returnType result = helper(root);
		
		return result.isValid;
    }
private:
	returnType helper(TreeNode *root) {
		
		if (root == nullptr) {
			return returnType(true);
		}
		
		returnType left = helper(root->left);
		returnType right = helper(root->right);
		
		if (!left.isValid || !right.isValid) {
			return returnType(false);
		}

		if (left.max != INT_MAX) {
			if (left.max >= root->val) return returnType(false);
		} else {
			left.max = left.min = root->val;
		}
		
		if (right.min != INT_MIN) {
			if (right.min <= root->val) return returnType(false);
		} else {
			right.max = right.min = root->val;
		}
		
		return returnType(true, left.min, right.max);
	}
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}