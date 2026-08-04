class Solution {
public:
    
    int largestArea(vector<int>arr){
        stack<int>st;
        vector<int>nse(arr.size());
        vector<int>pse(arr.size());

        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                nse[i]=arr.size();
            }
            else{
                nse[i]=st.top();
            }
            st.push(i);
        }

        while(!st.empty()){
            st.pop();
        }

          for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                pse[i]=-1;
            }
            else{
                pse[i]=st.top();
            }
            st.push(i);
        }
        int maxi=-1;
        for(int i=0;i<arr.size();i++){
            int area=arr[i]*(nse[i]-pse[i]-1);
            maxi=max(maxi,area);
        }
      return maxi;
    }


    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> arr(m,0);
         int maxArea=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    arr[j]++;
                }
                else{
                    arr[j]=0;
                }
            }
            int area=largestArea(arr);
            cout<<area<<endl;
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};