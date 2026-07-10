class Solution {
public:

   int pivotIndex(vector<int>& arr,int left,int right){
    int pivot=arr[right];
    int i=left-1;
       for(int j=left;j<right;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
       }
       swap(arr[i+1],arr[right]);
       return i+1;

   }


   void quickSort(vector<int>& arr,int left,int right){
    if(left>=right)return ;

        int pivot=pivotIndex(arr,left,right);
        quickSort(arr,left,pivot-1);
        quickSort(arr,pivot+1,right);
   }

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          quickSort(nums1,0,nums1.size()-1);
           quickSort(nums2,0,nums2.size()-1);

           int i=0;
           int j=0;
           vector<int> ans;
           
         while(i<nums1.size() &&j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
              i++;
              j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
         }
         return ans;
    }
};