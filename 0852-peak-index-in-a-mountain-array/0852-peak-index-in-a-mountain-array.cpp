class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int right=arr.size()-1;
        int ans=-1;;
        while(left<right){
            int mid=left+(right-left)/2;
            if(arr[mid]<arr[mid+1]){
            ans=mid+1;
            left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return ans;
    }
};