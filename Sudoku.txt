class Solution {
public:
  bool issafe(char val,int row,int col,vector<vector<char>> &board){
    for(int i=0;i<board.size();i++)
        if(board[i][col]==val)
        return false; 
        for(int j=0;j<board.size();j++)
        if(board[row][j]==val)
        return false;
            int colstart=col-col%3;
            int rowstart=row-row%3;
            for(int r=rowstart;r<rowstart+3;r++){
                for(int c=colstart;c<colstart+3;c++){
                    if(board[r][c]==val)
                    return false;
                }
                }
                
    return true;        
    }
   bool Solve(vector<vector<char>>& board){
    int n=board.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j] == '.'){
            for(char val='1';val<='9';val++){
                if(issafe(val,i,j,board)){
                    board[i][j]=val;
                    bool kyasolutiondepaoge=Solve(board);
                    if(kyasolutiondepaoge)
                        return true;
                        else{
                        board[i][j]='.';
                        }
                }
            }
                return false;
            }
        }
        }
        return true;
    }
   
    void solveSudoku(vector<vector<char>>& board) {
        Solve(board);
        
    }
    };
  


