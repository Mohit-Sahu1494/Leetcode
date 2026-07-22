class Solution {
public:
    int pivotInteger(int n) {
        int totalSum=n*(n+1)/2;
        for(int i=1;i<=n;i++){
            int left=(i-1)*(i-1+1)/2;
            int right=totalSum-left-i;
            if(left==right){
                return i;
            }
        } 
        return -1;
    }
};