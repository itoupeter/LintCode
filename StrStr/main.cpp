#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

class Solution {

public:

    /**

     * Returns a index to the first occurrence of target in source,

     * or -1  if target is not part of source.

     * @param source string to be scanned.

     * @param target string containing the sequence of characters to match.

     */

    int strStr(const char *source, const char *target) {

        // write your code here

		if( source == nullptr || target == nullptr ){
			return -1;
		}else if( *source == 0 && *target == 0 ){
			return 0;
		}
		
		const char *pSource = source;
		int result = -1;
		int count = 0;

		while( *pSource != 0 && result == -1 ){
			
			const char *pSourceTmp = pSource;
			const char *pTargetTmp = target;
			
			while( *pSourceTmp != 0 && *pTargetTmp != 0
					&& *pSourceTmp == *pTargetTmp ){
				++pSourceTmp;
				++pTargetTmp;
			}
			
			if( *pTargetTmp == 0 ){
				result = count;
				break;
			}
			
			++pSource;
			++count;
		}

		return result;
    }
};

int main(int argc, char **argv){
	
	Solution solution;
	char *s = "source";
	char *t = "target";
	
	cout << s << endl << t << endl;
	cout << solution.strStr( s, t );
	
	return 0;
}