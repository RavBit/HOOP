#include "Grid.h"


Grid::Grid()
{

};

void Grid::AddCells()
{
	for (int x = 0; x < 25; x++)
	{
		for (int y = 0; y < 25; y++)
		{
			Cells[x][y] = new Cell(x,y);
		}
	}
}

void Grid::DrawCells()
{
	for (int x = 0; x < 25; x++)
	{
		for (int y = 0; y < 25; y++)
		{
			cout << Cells[x][y]->Display();
		}
		cout << endl;
	}
	cout << endl;
}

void Grid::CheckNB(Cell* cell)
{
	int nb = 0;
	for (int x = (cell->x - 1); x <= (cell->x + 1); x++)
	{
		if (x > 0 && x <= 25)
			for (int y = (cell->y - 1); x <= (cell->y + 1); y++)
				if (y >= 0 && y <= 25)
					if (Cells[x][y]->GetState())
					{
						nb += 1;
						cout << "X: " << x << " Y: " << y << endl;
					}
	}
	if (cell->oldalive)
		nb -= 1;
	cout << endl;
	if (nb > 3 || nb < 2 && cell->GetState())
		cell->SwitchState(false);
	else if(nb > 3 && cell->GetState())
		cell->SwitchState(true);
};


void Grid::RefreshGrid()
{
	DrawCells();
	for (int x = 0; x < 25; x++)
	{
		for (int y = 0; y < 25; y++)
		{
			Cells[x][y]->SaveState();
		}
	}
	for (int x = 0; x < 25; x++)
	{
		for (int y = 0; y < 25; y++)
		{
			CheckNB(Cells[x][y]);
		}
	}
};