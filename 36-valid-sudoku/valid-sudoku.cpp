class Solution {
public:

    bool isvalid(vector<vector<char>>& board, int sr,int sc){
       unordered_set<char> ch;
         for(int i=sr;i<sr+3;i++ ){
              
            for(int j = sc;j<sc+3;j++){
                if(board[i][j] == '.') continue;

                if(ch.find(board[i][j]) != ch.end()){
                    return false;
                }

                ch.insert(board[i][j]);
            }
         }
         return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
       
       //row check
        for(int row=0;row<9;row++){
             unordered_set<char> ch;
            for(int col =0;col<9;col++){
                if(board[row][col] == '.') continue;

                if(ch.find(board[row][col]) != ch.end()){
                    return false;
                }

                ch.insert(board[row][col]);
            }
        }

        //col check
        for(int col=0;col<9;col++){
             unordered_set<char> ch;
            for(int row =0;row<9;row++){
                if(board[row][col] == '.') continue;

                if(ch.find(board[row][col]) != ch.end()){
                    return false;
                }

                ch.insert(board[row][col]);
            }
        }

        //box check

        for(int sr = 0;sr<9;sr+=3){
            int er =sr+2;
            for(int sc =0;sc<9;sc+=3){
                int ec = sc+2;
                if(!isvalid(board,sr,sc)){
                    return false;
                }
            }
        }
       return true;
    }


};