#include"deque.h"

void Deque::push_back(float x){
	elementos.push_back(x);
}
void Deque::push_front(float x){
	elementos.push_front(x);
}
void Deque::pop_back(){
	cout << " " << elementos.back();
	elementos.pop_back();
}
void Deque::pop_front(){
	cout << " " << elementos.front();
	elementos.pop_front();
}
int Deque::get_size(){
	return elementos.size();
}

int Deque::empty(){
	if(elementos.empty()==1) return 1;
	return 0;
}