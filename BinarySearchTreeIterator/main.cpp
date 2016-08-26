#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class IteratorType {
public:
	IteratorType(TreeNode *ptr = nullptr, int state = 0) {
		this->ptr = ptr;
		this->state = state;
	}
	
	TreeNode *ptr;
	int state;
};

class BSTIterator {
public:
    //@param root: The root of binary tree.
    BSTIterator(TreeNode *root) {
        // write your code here
		if (root == nullptr) {
			nextIterator = nullptr;
			return;
		}
		
		vit.clear();
		vit.push_back(IteratorType(root, 0));
		findNext();
    }

    //@return: True if there has next node, or false
    bool hasNext() {
        // write your code here
		return nextIterator != nullptr;
    }

    //@return: return next node
    TreeNode* next() {
        // write your code here
		TreeNode *result = nextIterator;
		findNext();
		return result;
    }
private:
	void findNext() {
		
		if (vit.empty()) {
			nextIterator = nullptr;
			return;
		}
		
		IteratorType &cur = vit.back();
		
		if (cur.state == 0) {
			if (cur.ptr->left != nullptr) {
				vit.push_back(IteratorType(cur.ptr->left, 0));
				findNext();
			} else {
				cur.state = 1;
				nextIterator = cur.ptr;
			}
		} else if (cur.state == 1) {
			if (cur.ptr->right != nullptr) {
				vit.push_back(IteratorType(cur.ptr->right, 0));
				findNext();
			} else {
				while (!vit.empty() && vit.back().state > 0) {
					vit.pop_back();
				}
				if (!vit.empty()) {
					nextIterator = vit.back().ptr;
					vit.back().state = 1;
				} else {
					nextIterator = nullptr;
				}
			}
		}
	}
	
	vector<IteratorType> vit;
	TreeNode *nextIterator;
};

int main(int argc, char **argv){
	
	Solution solution;
	
	
	return 0;
}