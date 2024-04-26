//Two Sum - 01
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
	for(int i = 0; i< n-1 ; i++){
		for(int j = i+1; j< n; j++){
			if(nums[i] + nums[j] == target){
				return {i,j}
			}
		}
	}
	return {};
    }
};
//Brute force approach=>
//create a n variable that will be the size of the array and make a nested for loop the outer loop will go from 0->n-1 the penultimate index and the inner loop will go to i+1 -> n the next index of i to n , the last index ... and we will add the i and j value and compare this to the target
//Complexity O(n^2)
