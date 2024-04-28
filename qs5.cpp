/* 20. Valid Parentheses
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"
Output: true
*/
class Solution {
public:
    bool isValid(string s) {
	stack <char> stack;
	unordered_map <char,char> mapping = {{')','('},{'}','{'},{']','['}};
	for(char c:s){
		if(mapping.find(c) == mapping.end()){
			stack.push(c);
		}
		else if(!stack.empty()&& mapping[c] == stack.top()){
			stack.pop();

		}
		else{
			return false;
		}
	}
	return stack.empty();

    }
};







/*This is the explanation:
 *
 *firstly we will create a unordered hashmap where we will store the paranthesis in a 'special' order like {{')','('}} I mean the valid starting paranthesis will be positioned at the end of the hashmap and so on the paranthesis are positioned 


 *Next we will create a stack (I had created it upper)
 *Then we iterate the given string on the iterator lets say 'c'
 *The 'Crucial' part we will check if mapping (the hashmap) .find(c) Means the string that found in the hashmap is equal to the end map ('The starting paranthesis')
 *If that is true then We will push the element in our stack'That we have initialized' and 
 *if the stack is not empty and mapping[c] is equals to the top of the stack; if it is true then pop the stack like if we have TOS(top of stack) = {'('} and we found ')' on the given string then we we will pop the '(' from the stack and we will move on
 *
 * if this is not true then we will return false as else statement
 *
 *
 * At last we should make the created stack.empty() to pop rest of stuff 
 *
 * THIS PROBLEM IS HIGHLY AFFILATED TO THE EXPRESSION CONVERSION IN PROGRAMMING "INORDER","POSTORDER","PREORDER", IF Y'LL FORGET THAT GO THROUGH Y'LL UNDERSTAND
 *
 *
 */

