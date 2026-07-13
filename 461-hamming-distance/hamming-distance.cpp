class Solution {
public:
    int hammingDistance(int x, int y) {

        int d = 0;

        while (x != 0 || y != 0) {

            int b1 = x % 2;
            int b2 = y % 2;

            if (b1 != b2)
                d++;

            x /= 2;
            y /= 2;
        }

        return d;
    }
};