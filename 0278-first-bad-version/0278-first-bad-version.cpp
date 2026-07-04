// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         int left=1;
         int right=n;
          while(left<right){
                int mid=left+(right-left)/2;
            //     yah par agar Bad version true mila to yah bhi  ho sakta hai ki isse pahle bhi kahi badversion ho 
                if(isBadVersion(mid)){
                    right=mid;
                }
                //  agar bad version false mila to yah hoga ki  is number se pahle kahi par bhi bad version  nhi hia
                else{
                    left=mid+1;
                }
          }
          return left;
    }
};