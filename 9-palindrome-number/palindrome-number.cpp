class Solution {
public:
    bool isPalindrome(int x) {

        if(x >= 0){
            int y = x;
            long rev = 0;
        while(x!=0){
            int digit = x % 10;
            rev = rev*10 + digit;
            x/=10;

        }
        if(rev == y) return true;
        return false;
        }
        return false;
       

        
    }
};