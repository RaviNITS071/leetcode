class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> ans(101, 0);
        int missing = -1;

        for(int i = 0; i < n; i++){
            if(nums[i] % k == 0){
                int idx = nums[i] / k;
                ans[idx-1] = 1;
            }
        }

        for(int i = 0; i < 101; i++){
            if(ans[i] == 0){
                missing = (i+1) * k;
                break;
            }
        }
        return missing;
    }
};