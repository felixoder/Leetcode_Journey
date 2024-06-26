/* 35. Search Insert Position
 * Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
	    int low = 0;
	    int high = nums.size();
	    int mid;
	    if(target > nums[high-1]){
		    return high;
	    }
	    while(low <= high){
		    mid = (low + high)/2;
		    if(nums[mid] == target){
			    return mid;
		    }
		    if(target < nums[mid]){
			    high = mid-1;

		    }
		    else{
			    low = mid+1;
		    }
	    }
	    return low;

    }
};

/* Binary seaerch approach is damn easy for this question and also easy to think of it.
the array is sorted so we just have to figure out where should it be placed.
so we just have to figure out the position at which the prevoius value is less that our element and next value is more than our element.
Thats how its figured out that it's a binary seach problem.
Complexity
Time complexity: O(log(n))
Space complexity: O(1)
*/
