class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> freq;
        vector<int> ans;
        int constraint = floor(nums.size() / 3);

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto it : freq){
            if(it.second > constraint) ans.push_back(it.first);
        }

        return ans;
    }
};