class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> ans(nums.size() , 0);
        int ls = 0, rs = 0, sum = 0;
        for(int i : nums){
            sum += i;
        }

        for(int i = 0; i < nums.size(); i++){
            if(i == 0) ls = 0;
            else{
                ls += nums[i-1];
            }

            rs = sum - ls - nums[i];

            if(ls - rs < 0){
                ans[i] = -(ls - rs);
            }
            else{
                ans[i] = ls - rs;
            }
        }

        return ans;
    }
};