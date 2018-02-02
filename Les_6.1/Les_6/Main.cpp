#include <vector>
#include <mutex>
#include <iostream>
#include <thread>
#include "ConcurrentVector.h"

using namespace std;

ConcurrentVector* convector = new ConcurrentVector();
mutex lock;

void pushback()
{
	convector->Pushvector(1);
}
int main()
{
	thread thread1(&pushback);
	thread thread2(&pushback);

	thread1.join();
	thread2.join();

	cout << convector->Display() << endl;

	system("pause");
	return 0;
};