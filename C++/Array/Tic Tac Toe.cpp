class Solution{   
public:
    bool isValid(char board[9]){
        int nX=0, nO=0;
        map<char, bool> mp;
        mp['X']=false;
        mp['O']=false;
        
        for(int i=0; i<9; i++){
            if(board[i]=='X')
                nX++;
            else
                nO++;
        }
        
        if(nX==5){
            if(board[0]==board[1] && board[1]==board[2])
                mp[board[0]]=true;
            if(board[3]==board[4] && board[4]==board[5])
                mp[board[3]]=true;
            if(board[6]==board[7] && board[7]==board[8])
                mp[board[6]]=true;
            if(board[0]==board[3] && board[3]==board[6])
                mp[board[0]]=true;
            if(board[1]==board[4] && board[4]==board[7])
                mp[board[1]]=true;
            if(board[2]==board[5] && board[5]==board[8])
                mp[board[2]]=true;
            if(board[0]==board[4] && board[4]==board[8])
                mp[board[0]]=true;
            if(board[2]==board[4] && board[4]==board[6])
                mp[board[2]]=true;
            
            if(mp['X'] && mp['O'])
                return false;
            else if(mp['O'])
                return false;
            else
                return true;
        }
        
        return false;
    }
};
