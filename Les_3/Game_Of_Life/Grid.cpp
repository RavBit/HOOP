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
			Cells[x][y] = new Cell(x,y, true);
			Cells[x][y]->SaveState();
		}
	}
}


void Grid::CheckNB(Cell* cell)
{
	int nb = 0;
	int x = cell->x;
	int y = cell->y;

	//Checking for neighbours around the Cell
	if (x < 25 && y > 0) 
	{
		if (Cells[x + 1][y - 1]->GetState()) 
		{
			nb++;
		}
	}

	if (x < 25) 
	{
		if (Cells[x + 1][y]->GetState()) 
		{
			nb++;
		}
	}

	if (x < 25 && y < 25)
	{
		if (Cells[x + 1][y + 1]->GetState()) 
		{
			nb++;
		}
	}

	if (x > 0 && y > 0) 
	{
		if (Cells[x - 1][y - 1]->GetState()) 
		{

			nb++;
		}
	}

	if (x > 0) 
	{
		if (Cells[x - 1][y]->GetState())
		{
			nb++;
		}
	}

	if (x > 0 && y < 25) 
	{
		if (Cells[x - 1][y + 1]->GetState())
		{
			nb++;
		}
	}

	if (y > 0) 
	{
		if (Cells[x][y - 1]->GetState()) 
		{
			nb++;
		}
	}

	if (y < 25) 
	{
		if (Cells[x][y + 1]->GetState()) 
		{
			nb++;
		}
	}
	if (cell->GetState())
	{
		if (nb > 3 || nb < 2)
		{

			cell->SetState(false);
			nb = 0;
		}
	}
	else if (cell->GetState())
	{
		if (nb == 3)
		{
			cell->SetState(true);
			nb = 0;
		}
	}
	else
	{
		nb = 0;
	}
};


void Grid::RefreshGrid()
{
	for (int x = 0; x < 25; x++)
	{
		for (int y = 0; y < 25; y++)
		{
			Cells[x][y]->SaveState();
			cout << Cells[x][y]->Display();
		}
		cout << endl;
	}
	for (int x = 0; x < 24; x++)
	{
		for (int y = 0; y < 24; y++)
		{
			CheckNB(Cells[x][y]);
		}
	}
};