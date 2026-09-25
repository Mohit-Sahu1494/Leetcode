class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>rows;
        unordered_set<int>columns;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
              if(matrix[i][j]==0){
                rows.insert(i);
                columns.insert(j);
              }
            }
        }
        for(auto it:rows){
            for(int i=0;i<matrix[0].size();i++){
                matrix[it][i]=0;
            }
        }
        for(auto it:columns){
            for(int i=0;i<matrix.size();i++){
                matrix[i][it]=0;
            }
        }
    }
};