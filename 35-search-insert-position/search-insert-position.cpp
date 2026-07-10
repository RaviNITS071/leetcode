class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = -1;
        int st = 0, end = nums.size() - 1;

        while(st <= end){
            int mid = st + ( end - st ) / 2;

            if(nums[mid] == target) return mid;

            if(nums[mid] < target) st = mid+1;
            if(nums[mid] > target) end = mid-1;


        }

        return st;

       
    }
};