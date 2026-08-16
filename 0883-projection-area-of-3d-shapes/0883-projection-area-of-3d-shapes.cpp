class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        int top=0;
        int side=0;
        int front=0;

        for(int i=0;i<grid.size();i++){
            int rowMax=0;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]>0) top++;
                rowMax=max(rowMax,grid[i][j]);
            }
            front+=rowMax;
        }
        for(int j=0;j<grid[0].size();j++){
            int colMax=0;
            for(int i=0;i<grid.size();i++){
                colMax=max(colMax,grid[i][j]);
            }
            side+=colMax;
        }
      return top+front+side;
    }
};