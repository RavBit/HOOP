#pragma once
#include <vector>

template<class T>

class Queue {
public:
	Queue(T obj) {
		queue = new std::vector<T>();
	}

	void Put(T obj) {
		queue.push_back(T);
	}

	T Get() {
		T obj;
		obj = queue[0];
		queue.erase(queue.[0]);
		return obj;
	}

	T Peek() {
		return queue[0];
	}

	int Size() {
		return queue.size();
	}

private:
	std::vector<T> queue;
};