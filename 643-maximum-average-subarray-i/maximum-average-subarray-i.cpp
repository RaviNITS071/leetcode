class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double currSum = 0;
        int l = 0;
        int r;

        for( r = 0; r < k; r++){
            currSum += nums[r];
            
        }
        double maxSum = currSum;

        while(r < nums.size()){
            currSum = currSum + nums[r] - nums[l];
            maxSum = max(currSum, maxSum);
            l++;
            r++;
        }

        return (maxSum) / k;
    }
};