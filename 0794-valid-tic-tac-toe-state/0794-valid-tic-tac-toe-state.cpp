// class Solution {
// public:
//     bool validTicTacToe(vector<string>& board) {
//         unordered_map<char,int> map;
//         for(int i=0;i<board.size();i++){
//             for(int j=0;j<board[i].length();j++){
//                 char cell = board[i][j];
//                 if (cell != ' ') {
//                     map[cell]++;
//                 }
//             }
//         }
//         int empty = 9-map['X']-map['O'];
//         if(map['X']==map['O'] && empty%2==1) return true;
//         if(map['X']-map['O']==1 && empty%2==0) return true;
//         return false;
//     }
// };

class Solution {
public:
    bool validTicTacToe(std::vector<std::string>& board) {
        std::unordered_map<char, int> map;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].length(); j++) {
                char cell = board[i][j];
                if (cell != ' ') {
                    map[cell]++;
                }
            }
        }

        if (map['O'] == map['X'] || map['O'] == map['X'] - 1) {
            if ((win(board, 'X') && map['O'] != map['X'] - 1) || (win(board, 'O') && map['O'] != map['X'])) {
                return false;
            }
            return true;
        }

        return false;
    }

private:
    bool win(const std::vector<std::string>& board, char player) {
        for (const auto& row : board) {
            if (row[0] == player && row[1] == player && row[2] == player) {
                return true;
            }
        }
        for (int i = 0; i < 3; i++) {
            if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
                return true;
            }
        }
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
            return true;
        }

        if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
            return true;
        }

        return false;
    }
};