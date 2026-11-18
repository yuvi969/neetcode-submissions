class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<char>seen;

        for(int row=0;row<9;row++){
            seen.clear();
            for(int col=0;col<9;col++){
                char temp=board[row][col];
                if(temp=='.')continue;
                if(seen.find(temp)!=seen.end())return false;
                seen.insert(temp);
            }
        }

        for(int col=0;col<9;col++){
            seen.clear();
            for(int row=0;row<9;row++){
                char temp=board[row][col];
                if(temp=='.')continue;
                if(seen.find(temp)!=seen.end())return false;
                seen.insert(temp);
            }
        }

        for(int row=0;row<9;row+=3){
            for(int col=0;col<9;col+=3){
                seen.clear();
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        char temp=board[row+i][col+j];
                        if(temp=='.')continue;
                        if(seen.find(temp)!=seen.end())return false;
                        seen.insert(temp);
                    }
                }
            }
        }
        return true;
        
    }
};
