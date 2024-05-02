/* 66. Plus One
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
	    int n = digits.size();
	    for(int i = n-1; i>=0; i--){
		    if(i == n-1){
			    digits[i]++;

		    }
		    if(digits[i] == 10){
			    digits[i] = 0;
			    if(i != 0){
				    digits[i-1]++;

			    }
			    else{
				    digits.push_back(0);
				    digits[i] = 1;
			    }
		    }
	    }
	    return digits;
    }
};


/* The question is not tough I will iterate the end of the array and increment the last digit by 1.
 * 1. The catchy part is the 3rd test case when I have [1,2,9] and the result should be [1,3,0] so we are getting the last character like "carry" so I simple wrote a if statement that when I will get the digits[i] = 10 then simply make it 0 and do insert an element using push_back (of vector) and make the penultimate digit as 1 so 0 => for push back at end and 1 for incrementing purpose . otherwise just increment the penultimate digit with the carry like 2 + 1(for carry) and = > 3
 *
 * as simple as that 
 *
 * complexity:
 * as there is only one for loop so for that O(n)
 *
 *
 */
