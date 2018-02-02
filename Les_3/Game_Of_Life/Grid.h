#pragma once
#include <iostream>
#include <vector>
#include "cell.h"
class Grid
{
public:
	static const int maxneighbours = 3;
	static const int minneighbours = 3;
	static const int birth = 3;
	Grid();
	Cell* Cells[25][25];
	void AddCells();
	void DrawCells();
	void RefreshGrid();
	void CheckNB(Cell* cell);
};