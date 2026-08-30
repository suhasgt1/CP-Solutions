class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i =0 ; i <9 ; i++){
            for (int j=0 ; j < 9 ; j++){
                if (board[i][j]=='.') continue ; 
                int currele= board[i][j];
                for (int x=i+1 ; x < 9 ; x++) if (board[x][j]==currele) return false ; 
                for(int x= j+1 ; x <9 ; x++) if (board[i][x]==currele) return false ; 
                int row= (i/3)*3, col= (j/3)*3, count=0;
                for (int x= row ; x< row+3 ; x++) for (int y = col; y< col+3 ; y++) if (board[x][y]==currele) count++;
                if (count>1) return false ;
            }
        }
        return true ; 
    }
};