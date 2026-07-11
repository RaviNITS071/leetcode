class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix = 0;
        int suffix = 0;
        int ans = -1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            if(i == 0) prefix = 0;

            else{
            prefix = prefix + nums[i-1];
            }

            suffix = sum - prefix - nums[i];

            if(prefix == suffix) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};