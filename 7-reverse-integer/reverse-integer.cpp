class Solution {
public:
    long reverse(int x) {
        long num = 0;
      
        while(x!=0){
            int digit = x % 10;
            num = num*10 + digit;
            x = x/10;
        }
        if(num > INT_MAX || num < INT_MIN) return 0;
         
        

        return num;


       
    }
};