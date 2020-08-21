/*
* Kadane's algorithm solves the maximum subarray problem.
* Application of this algorithm can be seen in sequence analysis and 
* computer vision.
* Kindly refer https://www.wikiwand.com/en/Maximum_subarray_problem for
* more details towards the problem.
*/

class Solution{
	public:
		int maxSubArraySum( vector <int> nums ){
			// variables
			int curSum = 0;
			int bestSum = INT_MIN;

			//loop
			for (int i = 0; i < nums.size(); i++) {
					curSum = curSum + nums[i];
					if (curSum < nums[i])
					{
							curSum = nums[i];
					}
					bestSum = max( curSum, bestSum );
			}

			//return
			return bestSum;
		}
};

