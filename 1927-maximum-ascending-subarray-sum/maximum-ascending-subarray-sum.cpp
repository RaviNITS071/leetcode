class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = nums[0];
        int prevMaxSum = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                currSum += nums[i];
                maxSum = max(currSum,maxSum);
            }
            else{
                currSum = nums[i];
                if(maxSum > prevMaxSum){
                    prevMaxSum = maxSum;
                }
                maxSum = nums[i];
                
            }
        }

        return max(maxSum,prevMaxSum);
    }
};