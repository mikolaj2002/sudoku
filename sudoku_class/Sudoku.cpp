#include <iostream>
#include "Sudoku.h"

Sudoku::Sudoku()
{

}

void Sudoku::genearate()
{

}

void Sudoku::show()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			std::cout << board[i][j] << " ";
		std::cout << std::endl;
	}
}