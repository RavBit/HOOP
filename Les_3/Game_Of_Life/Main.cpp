#include "Grid.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;
int main() {
	// Had some help of classmates over at this example

	Grid* BaseGrid;
	double framerate = 0.2; 
	float timeDif = 0; 


	float totalTime = 0; 
	clock_t clockTime;

	clockTime = clock();
	BaseGrid = new Grid();



	BaseGrid->AddCells();

	while (true) {
		timeDif = ((float)(clock() - clockTime)) / CLOCKS_PER_SEC;
		clockTime = clock();




		totalTime += timeDif;


		if (totalTime > (framerate)) {
			BaseGrid->RefreshGrid();
			totalTime -= (framerate);
			cout << flush;


		}

	}

	system("cls");
	return 0;
}