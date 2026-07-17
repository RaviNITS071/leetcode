class Solution {
public:
    bool checkPrime(int n){
        if(n == 1 || n == 0) return false;
        for( int i = n-1; i > 1 ; i --){
            if(n % i == 0) return false;

        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        int hash[101] = {0};
        for( int i = 0; i < nums.size(); i++){
            hash[nums[i]] += 1;
        }

        for( int i = 0; i < 101 ; i++){
           if(checkPrime(hash[i])) return true;
        }

        return false;
    }
};