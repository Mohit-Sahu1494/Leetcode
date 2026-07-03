class Solution {
public:
     
     void merge(vector<int> & nums,int left,int mid,int right){
    //   declear the temp variable 
      vector<int>temp;
       int i=left;
       int j=mid+1;
       
      while(i<=mid && j<=right){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }
      }
      
      while(i<=mid){
        temp.push_back(nums[i]);
        i++;
      }
      while(j<=right){
         temp.push_back(nums[j]);
         j++;
      }
      for(i=left;i<=right;i++){
        nums[i]=temp[i-left];
      }
     }

      void mergeSort(vector<int> & nums,int left,int right){
        if(left>=right) return ;
        int mid=(left+right)/2;
        mergeSort(nums,left,mid);
        mergeSort(nums,mid+1,right);
        merge(nums,left,mid,right);
      }

  
    vector<int> sortArray(vector<int>& nums) {
      int left=0;
      int right=nums.size()-1;
      mergeSort(nums,left,right);
      return nums;
    }
};