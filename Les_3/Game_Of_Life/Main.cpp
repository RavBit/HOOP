#include "Grid.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() {

	Grid* MainGrid = new Grid();

	MainGrid->AddCells();
	MainGrid->DrawCells();
	//Asked some help of a classmate for this part. As you can see the DrawField are also commented out.
	//I got stuck at this part of the assignment
	//Framerate of the Game of Life
	double framerate = 60;

	float deltatime = 0;
	float totaltime = 0;

	clock_t clockTime;
	clockTime = clock();
	MainGrid->RefreshGrid();
	MainGrid->RefreshGrid();
	/*while (true) {

		deltatime = ((float)(clock() - clockTime)) / CLOCKS_PER_SEC;
		clockTime = clock();
		totaltime += deltatime;
		if (totaltime > (framerate))
		{
			MainGrid->RefreshGrid();
			totaltime -= (framerate);
			cout << flush;
		}
	};*/

	for (int x = 0; x < 25; x++)
	{
		MainGrid->RefreshGrid();
	};
	system("pause");
}
