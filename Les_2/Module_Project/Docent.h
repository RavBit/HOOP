#pragma once
#include <string>

using namespace std;


class Docent {
public:
	Docent(string);
	string getName();
private:
	string name;
};