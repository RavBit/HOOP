#include <queue>
#include <thread>
#include <iostream>
#include <mutex>


using namespace std;

int c = 0;
bool done = false;
queue<int> goods;
mutex mutexlock;
void producer() {
	for (int i = 0; i < 500; ++i) {
		mutexlock.lock();
		goods.push(i);
		c++;
		mutexlock.unlock();
	}

	done = true;
}

void consumer() {
	while (!done) {
		while (!goods.empty()) {
			mutexlock.lock();
			goods.pop();
			c--;
			mutexlock.unlock();
		}
	}
}

int main() {
	thread producerThread(producer);
	thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();
	cout << "Net: " << c << endl;
	system("pause");
}