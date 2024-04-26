//Roman to Integer 
//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Example: 
Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.

*/
class Solution {
public:
    int romanToInt(string s) {
  	  unordered_map < char, int> m;
	  //set the values
	  m['I'] = 1;
	  m['V'] = 5;
	  m['X'] = 10;
	  m['L'] = 50;
	  m['C'] = 100;
	  m['D'] = 500;
	  m['M'] = 1000;

	  int ans = 0; // the initialization
	  for(int i = 0; i< s.length(); i++){
		  if(m[s[i]] < m[s[i+1]]){
			  ans -= m[s[i]];
		  }
		  else{
			  ans += m[s[i]];
		  }
	  }
	  return ans;


    }
};


/*
Explanation:
 create an unordered hashmap where all teh default value like I,V,X,C,L,D are already given.... Now go through the string from 0th to endth index.
 for some special case:
 for XI(11):
 the m(hashmap) and s(string)
 m[s[i]] = 10 (X) is lesser than m[s[i+1]] = 1 (I) so we have to add the values to get the integer number like XI = 10+1 = 11;

 vice versa for IX (9):
 m[s[i]] = 1 (I) and the m[s[i+1]] = 10 (X) so we have to substract them like IX = 10 -1 = 9
 as simple as that
 
 *
 *
 *
 *
 *
 *
 *
 * */
