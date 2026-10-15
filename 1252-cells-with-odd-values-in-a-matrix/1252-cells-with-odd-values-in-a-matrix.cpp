class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
      vector<vector<int>>matrix(m,vector<int>(n,0));


        for(int i=0;i<indices.size();i++){
            int rows=indices[i][0];
            int cols=indices[i][1];

            for(int j=0;j<matrix[0].size();j++){
                matrix[rows][j]+=1;
            }
            for(int j=0;j<matrix.size();j++){
                matrix[j][cols]+=1;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]%2!=0){
                    count++;
                }
            }
        }
        return count;   
    }
};