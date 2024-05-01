/* 58. Length of Last Word
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
	int length = 0;
	bool count = false;
	for(int i = s.length()-1 ; i>=0 ; i--){
		if(s[i] != ' '){
			count = true;
			length++;
		}
		else if(count){
			break;
		}
	}
	return length;
    }
};

/* To solve this problem we have to create a count map which will be true when we w'll get a whitespace. It will be initialized to false default. in the iterative loop it will start from the end of the string and will go to first index so we want to get "The end String" 
 * 1. when we get a whitespace " " then we will make the flag bool variable "count" to true and we will increament the value of length. and so on we will get the last string length.
 * 2. Once if we get a whitespace that means we have already counted the end string so then we will "break" and return the length of the ending string;
 *
 */

