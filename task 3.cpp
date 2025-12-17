#include <iostream>
#include <vector>
using namespace std;

void drawBoard(const vector<char> &board) {
    cout << "\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    cout << "---+---+---\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    cout << "---+---+---\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
    cout << "\n";
}

bool checkWin(const vector<char> &b, char player) {
    
    for (int i = 0; i < 9; i += 3) {
        if (b[i] == player && b[i+1] == player && b[i+2] == player) return true;
    }
    
    for (int i = 0; i < 3; i++) {
        if (b[i] == player && b[i+3] == player && b[i+6] == player) return true;
    }
  
    if (b[0] == player && b[4] == player && b[8] == player) return true;
    if (b[2] == player && b[4] == player && b[6] == player) return true;

    return false;
}

bool boardFull(const vector<char> &board) {
    for (char c : board) {
        if (c == ' ') return false;
    }
    return true;
}

int main() {
    vector<char> board(9, ' ');
    char currentPlayer = 'X';
    int move;

    cout << "Tic-Tac-Toe Game\n";
    drawBoard(board);

    while (true) {
        cout << "Player " << currentPlayer << ", enter a cell number (1–9): ";
        cin >> move;

        if (move < 1 || move > 9) {
            cout << "Invalid cell. Please choose a number between 1 and 9.\n";
            continue;
        }

        if (board[move - 1] != ' ') {
            cout << "That cell is already taken. Choose another.\n";
            continue;
        }

        board[move - 1] = currentPlayer;
        drawBoard(board);

        if (checkWin(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins! Congratulations!\n";
            break;
        }

        if (boardFull(board)) {
            cout << "The game is a draw!\n";
            break;
        }

      
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "Game over. Thanks for playing!\n";
    return 0;
}