class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        int firstOcc = -1;
        vector<int>ans;
       
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                firstOcc = mid;
                end = mid - 1;
            } 
            else if( nums[mid] < target){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        if(firstOcc == -1) return  {-1,-1};

        int lastOcc = firstOcc;
        st = firstOcc;
        end = nums.size() - 1;


         while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                lastOcc = mid;
                st = mid + 1;
            } 
            else if( nums[mid] < target){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
       
       ans.push_back(firstOcc);
       ans.push_back(lastOcc);

        return ans;

    }
};