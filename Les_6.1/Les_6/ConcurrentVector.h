#pragma once

#include <vector>
#include <iostream>
#include <mutex>

using namespace std;
class ConcurrentVector
{
public:
	void Pushvector(int vector);
	int Display();
private:
	vector<int> vector;
	mutex lock;
};