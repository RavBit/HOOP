#pragma once
#include <string>
#include <iostream>

using namespace std;

class Module
{
public:
	void InsertModule(string modulename, int starttime, int duration);
private:
	string name;
	int duration;
	int starttime;
};


