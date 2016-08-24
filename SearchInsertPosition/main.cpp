#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {
public:
    int searchInsert(vector<int> &A, int target) {
		
		if( A.empty() ){
			return 0;
		}
		
		int lower = 0;
		int upper = A.size() - 1;
		
		while( lower != upper ){
			
			int mid = lower + ( ( upper - lower ) >> 1 );
			
			if( A[ mid ] >= target ){
				lower = mid + 1;
			}else{
				upper = mid;
			}
		}
		
		return target > A[ upper ] ? A.size() : upper;
    }
};
 
int main(int argc, char **argv){
	
	Solution solution;
	vector< int > a = { 1, 3, 5, 6 };
	int target = 1;
	
	for( int i : b ){
		a.push_back( i );
	}
	
	cout << solution.searchInsert( a, target ) << endl;
	
	return 0;
}