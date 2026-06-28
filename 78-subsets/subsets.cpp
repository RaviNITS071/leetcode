class Solution {
public:
    void getSubsets(vector<int>& nums,vector<int>ans, vector<vector<int>>& allSubsets, int i){
        if( i == nums.size()){
            allSubsets.push_back({ans});
            return ;
        }

        //for inclusion - of each element
        ans.push_back(nums[i]);
        getSubsets(nums,ans,allSubsets,i+1);


        // backtracking - for exclusion of each element
        ans.pop_back();
        getSubsets(nums,ans,allSubsets,i+1);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>allSubsets;
       vector<int> ans;
        getSubsets(nums,ans,allSubsets,0);

        return allSubsets;;

    }
};