#pragma once
#include <iostream>
#include <string>


using namespace std;
class Cell {
public:
	Cell(int x, int y);
	string Display();
	int x, y, spawnrate = 60;
	bool alive;
	bool oldalive;
	void Alive();
	void Death();
	void SwitchState(bool state);
	void SaveState();
	bool GetState();

};