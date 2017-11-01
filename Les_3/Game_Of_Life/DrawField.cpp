#pragma once
#include "DrawField.h";
#include <iostream>;
#include "cell.h";



void DrawField::CreateGrid()
{
	for (int x = 0; x < 25; x++) {
		for (int y = 0; y < 25; y++) {
			int r = rand() % 2;
			if(r == 0)
				board[x][y].alive = false;
			if (r == 1)
				board[x][y].alive = true;
		}

	}
	DrawGrid();
};

void DrawField::DrawGrid()
{
	for (int x = 0; x < 25; x++) {
		for (int y = 0; y < 25; y++) {
			//    std::cout << board[x][y].alive;        deze wegcommenten, dit vervang je met je if-statement
			if (board[x][y].alive == true)
			{
				std::cout << "1 "; // als je hier spaties bij gooit dan wordt het een vierkant grid, aangezien letters 1 bij 2 ratio hebben
			}
			if (board[x][y].alive == false)
			{
				std::cout << "0 ";
			}
		}
		std::cout << std::endl;
	}
	std::cout << "\n\n\n\n"; // toevoegen voor whitespace tussen grids
	CheckAlive();
};


void DrawField::CheckAlive()
{
	for (int x = 0; x < 25; x++) {
		for (int y = 0; y < 25; y++) {
			if (board[x][y].alive == true)
			{
				int nb = 0;
				//Links
				if (x > 0)
				{
					if (board[x - 1][y].alive == true)
					{
						nb++;
					}
				}
				//Rechts
				if (x < 25)
				{
					if (board[x][y - 1].alive == true)
					{
						nb++;
					}
				}
				//Boven
				if (y > 0)
				{
					if (board[x][y -1].alive == true)
					{
						nb++;
					}
				}
				//Onder
				if (y < 25)
				{
					if (board[x][y + 1].alive == true)
					{
						nb++;
					}
				}
				//Rechtsonder 
				if (x < 25 && y < 25)
				{
					if (board[x + 1][y + 1].alive == true)
					{
						nb++;
					}
				}
				//Linksonder
				if (x > 0 && y < 25)
				{
					if (board[x - 1][y + 1].alive == true)
					{
						nb++;
					}
				}
				//Linksboven
				if (x > 0 && y > 0)
				{
					if (board[x - 1][y - 1].alive == true)
					{
						nb++;
					}
				}
				//Rechtsboven
				if (x < 25 && y > 0)
				{
					if (board[x - 1][y - 1].alive == true)
					{
						nb++;
					}
				}
				if (nb == 3 || nb == 2)
				{
					board[x][y].alive = true;
				}
				if (nb != 3)
				{
					//std::cout << std::to_string(nb);
					board[x][y].alive = false;
				}
				nb = 0;
			}
		}
	}
	DrawGrid();
};


