class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRow=m;
      int minCol=n;

      for(auto el:ops){
        minRow=min(minRow,el[0]);
        minCol=min(minCol,el[1]);
      }
      return minRow*minCol;
    }
};