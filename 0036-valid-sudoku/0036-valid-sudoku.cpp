class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      for(int row=0;row<9;row++)  {
        unordered_set<char>present;
        for(int col=0;col<9;col++){
            if(board[row][col]=='.'){
                continue;
            }
            if(present.count(board[row][col])){
                return false;
            }
            present.insert(board[row][col]);
        }
      }
      for(int col=0;col<9;col++)  {
       unordered_set<char>present;
        for(int row=0;row<9;row++){
            if(board[row][col]=='.'){
                continue;
            }
            if(present.count(board[row][col])){
                return false;
            }
            present.insert(board[row][col]);
        }
      }
      for(int grid=0;grid<9;grid++){
        unordered_set<char>present;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int row=(grid/3)*3+i;
                int col=(grid%3)*3+j;
                if(board[row][col]=='.'){
                   continue;
                }
                if(present.count(board[row][col])){
                   return false;
                }
                 present.insert(board[row][col]);
            }
        }

      }
return true;
    }
};