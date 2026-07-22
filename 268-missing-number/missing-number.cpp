class Solution {
public:
    int missingNumber(vector<int>& nums) {


        int currSum = 0;
        for(int val : nums){

            currSum += val;
        }
      

        int n = nums.size();
        int actualSum = n*(n+1)/2;

        return actualSum - currSum;

    }
};