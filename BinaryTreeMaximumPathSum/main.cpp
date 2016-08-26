#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class returnType {
public:
	returnType(int maxOneEnd = 0, int maxInside = 0) {
		this->maxOneEnd = maxOneEnd;
		this->maxInside = maxInside;
	}
	
	int maxOneEnd;
	int maxInside;
};

class Solution {
public:
    int maxPathSum(TreeNode *root) {
        // write your code here
		returnType result = helper(root);
		
		return max(result.maxOneEnd, result.maxInside);
    }
private:
	returnType helper(TreeNode *root) {
		
		if (root == nullptr) {
			return returnType(INT_MIN, INT_MIN);
		}
		
		returnType left = helper(root->left);
		returnType right = helper(root->right);
		int maxOneEnd = root->val + max(max(left.maxOneEnd, right.maxOneEnd), 0);
		int maxInside = root->val;
		
		if (left.maxOneEnd > 0) {
			maxInside += left.maxOneEnd;
		}
		if (right.maxOneEnd > 0) {
			maxInside += right.maxOneEnd;
		}
		maxInside = max(max(left.maxInside, right.maxInside), maxInside);
		
		return returnType(maxOneEnd, maxInside);
	}
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}