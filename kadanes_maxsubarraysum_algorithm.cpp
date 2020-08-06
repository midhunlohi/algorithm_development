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
			int currentsum = 0;
			int bestsum = 0;
			for(int i = 0 ; i < nums.size() ; i++){
				currentsum = max( 0 , currentsum + nums[i] );
				bestsum = max( bestsum , currentsum );
			}
			return bestsum;		
		}
};

