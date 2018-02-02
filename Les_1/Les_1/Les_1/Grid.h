#pragma once
#include <string>
#include <iostream>
#include <vector>


class Grid
{
public:
	void DrawGrid(vector<Module> modulelist);
	void AdjustGrid(Module mod);
	void RemoveGrid(Module mod);

	vector<Module> ML;
};