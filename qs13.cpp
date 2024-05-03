/* 67. Add Binary
 * Given two binary strings a and b, return their sum as a binary string.



Example 1:

Input: a = "11", b = "1"
Output: "100"

*/
class Solution {
public:
    string addBinary(string a, string b) {
  	int carry = 0;
	string ans;
	int i = a.length()-1;
	int j = b.length()-1;
	while(i>=0 || j >=0 || carry){
		if(i>=0){
			carry += a[i--]-'0';
		}
		if(j>=0){
			carry += b[j--]-'0';
		}
		ans += carry%2 +'0';
		carry /= 2;
	}
	reverse(begin(ans),end(ans));
	return ans;
        
    }
};
/* Important Question
 *
 *We start at the right end of each binary number, adding the digits and any carry-over value, and storing the result in a new string.
Now we move to the next digit on the left and repeats the process until it has gone through all the digits in both binary numbers.
If there is any carry-over value after adding all the digits, append it to the end of the new string.
Finally, the new string is reversed and returned as the sum of the two binary numbers.
Explanation to Approach :
Suppose we want to add two binary numbers - "1010" and "1101".
To add these two numbers, we can use the given function as follows:
First, we initialize a StringBuilder object to store the sum and two integer variables 'carry' and 'i' to keep track of the carry-over value and the current position in the first binary number (a), respectively.
We also initialize another integer variable 'j' to keep track of the current position in the second binary number (b). Here is how the code initializes these variables:
StringBuilder sb = new StringBuilder();
int carry = 0;
int i = a.length() - 1;
int j = b.length() - 1;
Next, we enter a while loop that iterates until we have processed all digits in both binary numbers and there is no more carry-over value left. In each iteration, we add the digits from both numbers at the current position and the carry-over value (if any), and append the result to the StringBuilder object.
We also update the carry-over value based on the sum of the digits. Here is the code for this step:
while (i >= 0 || j >= 0 || carry == 1) {
    if (i >= 0) {
        carry += a.charAt(i--) - '0';
    }
    if (j >= 0) {
        carry += b.charAt(j--) - '0';
    }
    sb.append(carry % 2);
    carry /= 2;
}
In each iteration, the current position in each binary number is moved one digit to the left (if there are any digits left to process) by decrementing the value of i and j.
If there is a carry-over value from the previous iteration or the addition of the two digits produces a carry-over value, we set the value of 'carry' to 1; otherwise, we set it to 0.
We also append the sum of the digits to the StringBuilder object by computing the remainder of 'carry' divided by 2 (which is either 0 or 1).
Finally, we update the value of 'carry' by dividing it by 2 (which gives either 0 or 1) so that we can carry over any remaining value to the next iteration.
After the while loop completes, we reverse the StringBuilder object and convert it to a string using the toString() method.
This gives us the sum of the two binary numbers in binary format. Here is the final code:
return sb.reverse().toString();
Example : the sum of "1010" and "1101"
     1010
    +1101
    ______
    10111
Complexity
Time complexity : O(max|a|,|b|)
Space complexity : O(max|a|,|b|)

/* 
