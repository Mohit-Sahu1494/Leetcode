class Solution {
public:

    int gcdOfOddEvenSums(int n) {
        int oddSum=n*(2*n+1);
        int evenSum=n*(n+1);
         return __gcd(evenSum,oddSum);

    }
};