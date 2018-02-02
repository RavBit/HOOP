#include "ConcurrentVector.h"
#include <iostream>
#include <mutex>

using namespace std;


void ConcurrentVector::Pushvector(int _vector)
{
	lock.lock();
	vector.push_back(_vector);
	lock.unlock();
};

int ConcurrentVector::Display()
{
	return vector.size();
};