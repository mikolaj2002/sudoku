#pragma once
class Sudoku
{
	int board[9][9] = { 0 };

public:
	Sudoku();
	void genearate();
	void show();
};

