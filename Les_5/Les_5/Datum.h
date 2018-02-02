#pragma once
using namespace std;

class Datum
{
public:
	Datum(int dag, int maand, int jaar);
	void GetDatum();
private:
	int dag;
	int maand;
	int jaar;
};