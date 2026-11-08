class Solution {
public:
 bool isVailed(vector<vector<int>>&grid,int row,int col){
     for(int i=0;i<grid[0].size();i++){
        if(grid[row][i]==1 && i!=col){
            return true;
        }
     }
     for(int i=0;i<grid.size();i++){
        if(grid[i][col]==1 && i!=row){
            return true;
        }
     }
     return false;
 }
    int countServers(vector<vector<int>>& grid) {
        int count=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==1 &&isVailed(grid,i,j)){
                count++;
            }
        }
    }
    return count;

    }
};