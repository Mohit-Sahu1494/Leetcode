class Solution {
    private:
    int ans=0;
public:
bool isSafe(vector<vector<char>>&board,int rows,int col){
        // ek the row
        for(int i=0;i<board[0].size();i++){
            if(board[rows][i]=='Q'){
                return false;
            }
        }
        //  check the cols
        for(int j=0;j<board.size();j++){
            if(board[j][col]=='Q'){
                return false;
            }
        }
        //  check top left daigonals 
        int top,down,left,right;
          top=rows-1;
          left=col-1;
          while (top>=0 && left>=0){
             if(board[top][left]=='Q') return false;
             top--;
             left--;
          }
             // check top right daigonals
        top=rows-1;
        right=col+1;
           while (top>=0 && right<board[0].size()){
               if(board[top][right]=='Q') return false;
               top--;
               right++;
        }
        //  check down left daigonals;
          down=rows+1;
          left=col-1;
          while (down<board.size() && left>=0){
              if(board[down][left]=='Q') return false;
              down++;
              left--;
          }
        //    check down right daigonals;
         down=rows+1;
         right=col+1;
         while (down<board.size() && right<board[0].size()){
              if(board[down][right]=='Q') return false;
              down++;
              right++;
    } 
             return true; 
        }
  void helper(vector<vector<char>>&board,int rows){
          if(rows==board.size()){
              ans=ans+1;
               return;
          }
          for(int i=0;i<board[0].size();i++){
               if(isSafe(board,rows,i)){
                    board[rows][i]='Q';
                    helper(board,rows+1);
                    board[rows][i]='.';
               }
          }
     }
    int totalNQueens(int n) {
         vector<vector<char>> board(n, vector<char>(n, '.'));
       helper(board,0);
       int res=ans;
           ans=0;
       return res;
    }
};