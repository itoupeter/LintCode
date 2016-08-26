#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class returnType {
public:
	returnType(bool isA = false, bool isB = false, TreeNode *lca = nullptr) {
		this->isA = isA;
		this->isB = isB;
		this->lca = lca;
	}
	
	bool isA;
	bool isB;
	TreeNode *lca;
};
	
class Solution {
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *A, TreeNode *B) {
        // write your code here
		if (root == nullptr || A == nullptr || B == nullptr) {
			return nullptr;
		}
		
		returnType result = helper(root, A, B);
		
		return result.lca;
    }
private:
	returnType helper(TreeNode *root, TreeNode *A, TreeNode *B) {
		
		if (root == nullptr) {
			return returnType();
		}
		
		returnType left = helper(root->left, A, B);
		returnType right = helper(root->right, A, B);
		
		if (left.isA && left.isB) {
			return returnType(true, true, left.lca);
		} else if (right.isA && right.isB) {
			return returnType(true, true, right.lca);
		}
		
		bool isA = left.isA || right.isA || root == A;
		bool isB = left.isB || right.isB || root == B;
		
		return returnType(isA, isB, isA && isB ? root : nullptr);
	}
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}