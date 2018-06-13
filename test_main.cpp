#include<iostream>
#include"deque.h"

using namespace std;

int main(){
	Deque deque;
	deque.push_front(10);
	deque.push_front(9);
	deque.push_back(11);
	
	while(!deque.empty()){
		deque.pop_front();
	}
}