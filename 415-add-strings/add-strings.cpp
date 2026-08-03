class Solution {
public:
    string addStrings(string num1, string num2) {
  
        string ans = "";

        int carry = 0;

        int n1 = num1.length() - 1, n2 = num2.length() - 1;

        while( n1 >= 0 || n2 >= 0 || carry){
            int sum = carry;
            
            if(n1 >= 0){
                sum += num1[n1] - '0';
                n1--;
            }
            if(n2 >= 0){
                sum += num2[n2] - '0';
                n2--;
            }

            ans.push_back((sum % 10) + '0');
            carry = sum / 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};