class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int ls = 0, rs = 0;
        int qL = 0, qR = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                qL++;
            else
                ls += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                qR++;
            else
                rs += num[i] - '0';
        }

        int diff = ls - rs;


        if ((qL + qR) % 2 == 1)
            return true;

        if (diff == 9 * (qR - qL) / 2)
            return false;

        return true;
    }
};