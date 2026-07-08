class Solution {
public:
    int arrangeCoins(int n) {
      int left=1;
      int right=n/2+1;
       int ans=0;
    while(left<=right){
        long long mid=left+(right-left)/2;
        long long totalCoins=mid*(mid+1)/2;
        if(totalCoins<=n){
            ans=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return ans;
    }
};