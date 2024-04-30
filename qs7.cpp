/*26. Remove Duplicates from sorted array
 *
 * Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
  	int j = 1;
	for(int i = 1; i < nums.size(); i++){
		if(nums[i] != nums[i-1]){
			nums[j] = nums[i];
			j++;
		}

	}
	return j;
    }
};
















/*
The code starts iterating from i = 1 because we need to compare each element with its previous element to check for duplicates.

The main logic is inside the for loop:

If the current element nums[i] is not equal to the previous element nums[i - 1], it means we have encountered a new unique element.
In that case, we update nums[j] with the value of the unique element at nums[i], and then increment j by 1 to mark the next position for a new unique element.
By doing this, we effectively overwrite any duplicates in the array and only keep the unique elements.
Once the loop finishes, the value of j represents the length of the resulting array with duplicates removed.

Finally, we return j as the desired result.
*/
