#pragma once
#define ROW 3
#define COL 3

//≥ı ºªØ∆Â≈Ã
initBoard(char board[ROW][COL], int row, int col) {
	int  i = 0;
	int  j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++) {
			board[i][j] = ' ';
		}
	}
}