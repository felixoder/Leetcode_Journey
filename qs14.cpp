/*69. Sqrt(x)
 * Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
*/
class Solution {
public:
    int mySqrt(int x) {
	int left = 1;
	int right = x;
	long long mid;
	while(left <= right){
		long long mid = ((long long) left + right)/2;
		long long val = mid*mid;
		if(val <= x){
			left = mid+1;
		}

		else{
			right = mid -1;

		}
	}
	return left -1;


    }
};

/* 
Approach
Start with a binary search range from 1 to x.
In each iteration, calculate the middle value mid as (left + right) / 2. Use a long long type for mid to avoid overflow.
Calculate the square of mid and compare it with x.
If the square of mid is less than or equal to x, update left = mid + 1.
If the square of mid is greater than x, update right = mid - 1.
Repeat the process until left is greater than right.
Return left - 1 as the integer square root.
Complexity
Time complexity: O(log n), where n is the value of x. This is because we are using binary search to find the square root.
Space complexity: O(1), as we are using only a constant amount of extra space for variables
/* 
