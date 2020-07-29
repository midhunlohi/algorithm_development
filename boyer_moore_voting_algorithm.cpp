/*
* Boyer–Moore majority vote algorithm
* This algorithm is used for finding the majority of a sequence of elements
* using linear time and constant space.
* Majority element is the one which occurs repeatedly for more than half
* of the elements of the input.
* Please refer https://www.wikiwand.com/en/Boyer%E2%80%93Moore_majority_vote_algorithm
* for more details.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m;
        int counter = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if( counter == 0){
                m = nums[i];
                counter = 1;
            }else if ( m == nums[i]){
                counter = counter + 1;
            }else{
                counter = counter - 1;
            }
        }
        return m;
    }
};
