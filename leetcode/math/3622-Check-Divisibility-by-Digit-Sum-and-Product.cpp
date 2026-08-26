class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n, sum = 0, product = 1;

        while (x != 0) {
            sum += x % 10;
            product *= x % 10;
            x /= 10;
        }

        return n % (sum + product) == 0;
    }
};