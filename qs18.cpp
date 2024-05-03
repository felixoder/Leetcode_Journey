/* 121. Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
	int buyPrice = prices[0];
	int profit = 0;
	for(int i = 0 ; i<prices.size(); i++){
		if(buyPrice > prices[i]){
			buyPrice = prices[i];
			
		}
		profit = max(profit , prices[i] - buyPrice);
	}
	return profit;


    }
};

/*Approach
Simply, when we find low price of stock, we should buy it so that we can get maximum profit in a later day.

Input: prices = [7,1,5,3,6,4]
Initialize

buy_price = 7
profit = 0

7 is the first price in input array
We start from index 1.

[7,1,5,3,6,4]
   p

buy_price = 7
profit = 0
We find price 1. Let's think about whether we should update buy_price or not.

As I told you, we should buy the stock when we find low price because there is possiblity that we can get maximum profit in a later day.

Caculation of profit is very simple

profit = current price - buy price
At day 1, we find price 1, so we should buy it at day 1. Update buy_price with price 1

buy_price = 1
Then calclate profit.

profit = max(profit, current price - buy price)
0 = max(0, 1 - 1)
Next, I'll speed up.

[7,1,5,3,6,4]
     p

buy_price = 1
profit = 0
Update buy_price? → No, because previous buy_price is lower than current price.

Calculate profit.

profit = max(0, 5 - 1)
= 4
Next,

[7,1,5,3,6,4]
       p

buy_price = 1
profit = 4
Update buy_price? → No
Calculate profit.

profit = max(4, 3 - 1)
= 4
Next,

[7,1,5,3,6,4]
         p

buy_price = 1
profit = 4
Update buy_price? → No
Calculate profit.

profit = max(4, 6 - 1)
= 5
Next,

[7,1,5,3,6,4]
           p

buy_price = 1
profit = 5
Update buy_price? → No
Calculate profit.

profit = max(5, 4 - 1)
= 5
Finish iteration.

return 5
*/ 
