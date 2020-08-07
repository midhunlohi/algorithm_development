/*
* Binary Search is an algorithm to find the index of an element in a sorted array.
* If the array is not sorted, it require to sort before giving to the algorithm.
* Below solution work on iterative method. Time complexity is O(log n)
* Reference : https://www.wikiwand.com/en/Binary_search_algorithm
*/

class Solution {
public:
    int search(vector <int> nums, int target) {
	int left = 0;
	int right= nums.size()-1;
	int middle ;
	
	while(left <= right ){
		middle = (right + left)/ 2;
		if( target < nums[middle] ){
			right = middle-1;
		}
		else if(target > nums[middle]){
			left = middle+1;
		}else{
			return middle;
		}
	}
	return -1;	
    }
};

