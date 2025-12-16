// Problem Link https://cses.fi/problemset/task/1624

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<char>> board(8, vector<char> (8));
int totalWays = 0;

bool canPlace(const vector<vector<char>> board,int row, int col){
    for(int i = 0; i < row; i++){
        if(board[i][col] == 'Q')    return false;
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--,j--){
        if(board[i][j] == 'Q')  return false;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j <= 7; i--,j++){
        if(board[i][j] == 'Q')  return false;
    }
    return true;
}

void placeQueens(vector<vector<char>> board,int row){
    if (row == 8){
        totalWays++;
        return;
    }
    for (int col = 0; col < 8; col++){
        if(board[row][col] != '*' && canPlace(board, row, col)){
            board[row][col] = 'Q';
            placeQueens(board, row + 1);
            board[row][col] = '.';
        }
    }
}

int main(){
    for (auto &i : board){
        for (auto &j : i)   cin >> j;
    }
    placeQueens(board, 0);
    cout << totalWays << "\n";
}