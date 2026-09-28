#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char current_marker;
int current_player;

// Fungsi untuk menampilkan papan Tic-Tac-Toe
void drawBoard() {
    system("cls"); // Gunakan "clear" jika di Linux/Mac
    cout << "\n\tTic-Tac-Toe Game\n\n";
    cout << "Player 1 [X]  ---  Player 2 [O]\n\n";
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "     |     |     " << endl;
    cout << endl;
}

// Fungsi untuk mengubah posisi angka dengan marker (X atau O)
bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return true;
    }
    return false;
}

// Fungsi untuk mengecek pemenang
int checkWin() {
    // Baris dan Kolom
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return current_player;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return current_player;
    }
    // Diagonal
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return current_player;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return current_player;

    return 0;
}

void swapPlayerAndMarker() {
    if (current_marker == 'X') {
        current_marker = 'O';
        current_player = 2;
    } else {
        current_marker = 'X';
        current_player = 1;
    }
}

void playGame() {
    current_marker = 'X';
    current_player = 1;
    int winner = 0;

    for (int i = 0; i < 9; i++) {
        drawBoard();
        int slot;
        cout << "Player " << current_player << " (" << current_marker << "), masukkan nomor posisi (1-9): ";
        cin >> slot;

        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Posisi tidak valid atau sudah terisi! Coba lagi.\n";
            cin.ignore();
            cin.get();
            i--; // Ulangi giliran
            continue;
        }

        winner = checkWin();
        if (winner != 0) {
            drawBoard();
            cout << "\nSelamat! Player " << winner << " (" << current_marker << ") menang!\n";
            return;
        }

        swapPlayerAndMarker();
    }

    drawBoard();
    cout << "\nPermainan berakhir seri (Draw)!\n";
}

int main() {
    playGame();
    return 0;
}
