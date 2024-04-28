#include "Board.h"

Board::Board() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = '-';
        }
    }
}

void Board::placeQueen(int row, int col) {
    board[row][col] = 'Q';
}

void Board::removeQueen(int row, int col) {
    board[row][col] = '-';
}

bool Board::isSafe(int row, int col) {
    // Check row
    for (int i = 0; i < 8; ++i) {
        if (board[row][i] == 'Q') return false;
    }

    // Check column
    for (int i = 0; i < 8; ++i) {
        if (board[i][col] == 'Q') return false;
    }

    // Check diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'Q') return false;
    }

    for (int i = row, j = col; i >= 0 && j < 8; --i, ++j) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

void Board::printBoard() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int Board::getSize() {
    return 8; // Since it's an 8x8 board
}

