class Solution {
public:
    long long maxProductDifference(vector<int>& nums) {
        int max = 0, secMax = 0;
        int min  = 10e4, secMin = 10e4;

        for(int val : nums){
            if(val > secMax){
                if (val > max){
                    secMax = max;
                    max = val;
                }
                else{
                    secMax = val;
                }
            }
               
            
            if(val < secMin){
                if(val < min){
                    secMin = min;
                    min = val;
                }
                else{
                    secMin = val;
                }
            }
                
            
        }
        return ( max * secMax - min * secMin);
    }
};