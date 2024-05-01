/* 28. Find the Index of the First Occurrence in a String 
 * Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.



Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
	int n = haystack.length();
	int m = needle.length();
	for(int i=0 ; i<= n-m ; ++i){
		if((haystack.substr(i,m) == needle){
				return i;
				}
	}
	return -1;
    }
};

/*
 * Use a loop to iterate through the haystack string. The loop starts at index i = 0 and goes up to i = haystack.length() - needle.length(). This is done to ensure that there are enough characters left in the haystack for the needle to fit.

Within the loop, check substrings of length equal to the length of the needle starting from the current index i up to i + needle.length(). If any of these substrings matches the needle, return the current index i.

If the loop completes without finding a match, return -1.

Complexity
Time complexity: O(n * m)
Space complexity: O(1)

*/
