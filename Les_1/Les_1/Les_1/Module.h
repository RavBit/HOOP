#pragma once
#include <string>
#include <iostream>

using namespace std;

class Module
{
public:
	string name;
	void InsertModule(string modulename, int starttime, int duration);
private:
	int duration;
	int starttime;
};


