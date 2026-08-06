class Solution {
public:
    int smallestNumber(int n, int t) {
        
        for (int i = n; ; i++) {
            int num = i;
            int product = 1;

            // Digits ka product
            while (num > 0) {
                int digit = num % 10;
                product *= digit;
                num /= 10;
            }

            // t se divisible hai?
            if (product % t == 0) {
                return i;
            }
        }

        return -1;
    }
};