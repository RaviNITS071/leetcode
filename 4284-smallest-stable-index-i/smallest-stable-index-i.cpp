class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = -1;
        int maxi = nums[0];
        for(int i  = 0; i < nums.size(); i++){
            maxi = max(maxi,nums[i]);
            int mini = INT_MAX;

            for(int j = i; j < nums.size(); j++){
                mini = min(mini,nums[j]);
            }
            if((maxi - mini) <= k) {
                ans = i;
                break;
            }
        }
    
    return ans;

    }
};