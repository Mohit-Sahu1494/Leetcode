class Solution {
public:
    int getSum(int a, int b) {
          while(b!=0){
            int carray=a&b;
            a=a^b;
            b=carray<<1;
          }
          return a;
    }
};