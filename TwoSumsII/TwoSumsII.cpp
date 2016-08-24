#include <iostream>
using std::cout;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {

public:
    int twoSum2(vector<int> &nums, int target) {
        // Write your code here
		if( nums.empty() ){
			return 0;
		}
		
		int result = 0;
		int numberOfNums = nums.size();
		
		sort( nums.begin(), nums.end() );
		
		for( int i = 1; i < numberOfNums; ++i ){
			
			int lower = i;
			int upper = numberOfNums - 1;
			int newTarget = target - nums[ i - 1 ];
			
			while( lower != upper ){
				
				int mid = lower + ( upper - lower >> 1 );
				
				if( nums[ mid ] > newTarget ){
					upper = mid;
				}else{
					lower = mid + 1;
				}
			}
			
			result += nums[ upper ] > newTarget ? numberOfNums - upper : 0;
		}
		
		return result;
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	vector< int > nums;
	int inputNums[] = { 2, 7, 11, 15 };
	
	for( int i : inputNums ){
		nums.push_back( i );
	}
	
	cout << solution.twoSum2( nums, 24 );
	
	return 0;
}