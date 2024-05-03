/*70. Climbing Stairs
 * You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?



Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

*/

class Solution {
public:
    int climbStairs(int n) {
  	vector <int> dp(n+1,0);
	dp[0] =1;
	dp[1] =1;
	for(int i = 2; i<= n ; i++){
		dp[i] = dp[i-1] + dp[i-2];

	}
	return dp[n];
    }
};

/* The description says "Each time you can either climb 1 or 2 steps" that means number of ways to reach the current stair should be

current = # of current - 1 + # of current - 2
Let's think about this.

n = 5
s,1,2,3,4,5 (= stairs)
1,1,0,0,0,0 (= number of ways to reach each stair)

s is starting point
We count starting point as 1 way. That is base case and it's obvious that we have only one way to reach stair 1, because we can make 1 step or 2 steps from the starting point.

Let's think about stair 2. How can we reach the stair 2?

starting point → 1 step → 1 step
starting point → 2 steps
We have two ways.

s,1,2,3,4,5 (= stairs)
1,1,2,0,0,0 (= number of ways to reach each stair)

s is starting point
We can calculate 2 with above formula.

current = # of current - 1 + # of current - 2
2 = 1 + 1

The first 1 comes from index 1 (= 1 step from stair 2)
The second 1 comes from index 0 (= 2 steps from stair 2)
Looks good! Let's think about stair 3.

starting point → 1 step → 1 step → 1 step
starting point → 2 steps → 1 step
starting point → 1 step → 2 steps
We have 3 ways.

s,1,2,3,4,5 (= stairs)
1,1,2,3,0,0 (= number of ways to reach each stair)

s is starting point
We can calculate 3 with above formula.

current = # of current - 1 + # of current - 2
3 = 2 + 1

2 comes from index 2 (= 1 step from stair 3)
1 comes from index 1 (= 2 steps from stair 3)
Let me speed up. For stair 4 and stair 5.

s,1,2,3,4,5 (= stairs)
1,1,2,3,5,8 (= number of ways to reach each stair)

3(= 1 step) + 2(= 2 steps) = 5
5(= 1 step) + 3(= 2 steps) = 8
return 8
We keep number of ways to reach each stair with array. In other words, we call it dynamic programming.
*/
