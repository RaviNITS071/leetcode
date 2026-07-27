class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = 0;
        int secLargest = 0;
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] >= largest){
               if(largest > 0 ) secLargest = largest;
                largest = nums[i];
            }
            if(nums[i] > secLargest && nums[i] < largest){
                secLargest = nums[i];
            }
        }
        return (largest - 1)*(secLargest-1);
    }
};