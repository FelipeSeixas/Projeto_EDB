#include<iostream>
#include"deque.h"
#include"expressao.h"

using namespace std;

int main(){
	Expressao *expressao = new Expressao[100];
	int i=0;

	for(int i =0; expressao[i].getEntradaStr()!="fim"; i++){
		expressao[i].ler_entrada();
		expressao[i].imprime_deque();
	}
}