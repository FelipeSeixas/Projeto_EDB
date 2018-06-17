#ifndef DEQUE_H
#define DEQUE_H

#include<iostream>
#include<list>

using namespace std;

class Deque {
	private:
		int size;
		list<char> elementos;
	public:
		void push_back(char x);
		void push_front(char x);
		void pop_back();
		void pop_front();
		int empty();
		int get_size();
};

#endif