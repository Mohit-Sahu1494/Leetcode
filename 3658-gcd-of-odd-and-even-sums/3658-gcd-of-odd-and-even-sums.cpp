class Solution {
public:
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

    int gcdOfOddEvenSums(int n) {
        int oddSum=0;
        int evenSum=0;
         for(int i=1;i<=n*2;i++){
             if(i%2==0){
                evenSum+=i;
             }
             else{
                oddSum+=i;
             }
         }
         return gcd(evenSum,oddSum);

    }
};