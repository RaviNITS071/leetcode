class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int prevSum = 0, nextSum = 0, sum = 0 , ans = -1;

        for( int el : nums){
            sum += el;
        }

        for(int i = 0; i < nums.size(); i++){
            if(i == 0) prevSum = 0;
            else{
                prevSum += nums[i-1];
            }

            nextSum = sum - prevSum - nums[i];
            if(prevSum == nextSum){
                ans = i;
                break;
            }
        }

        return ans;
    }
};