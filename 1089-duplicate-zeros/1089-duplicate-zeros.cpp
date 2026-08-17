class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();

        int countZero=0;
        for(int x:arr){
            if(x==0){
                countZero++;
            }
        }
        int i=n-1;
        int j=n+countZero-1;

        while(i<j){
            if(j<n){
                arr[j]=arr[i];
            }
            if(arr[i]==0){
                j--;
                if(j<n){
                    arr[j]=0;
                }
            }
            j--;
            i--;
        }
    }
};