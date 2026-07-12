class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        if(n == 1) return 1;
        while(n > 1){
            if(n % 2 == 1) count++;
            n /= 2;
        }
        return ++count;
    }
};