class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0, product = 1;
        while(n > 0){
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }

        if(temp % (sum+product) == 0) return true;
        return false;
    }
};