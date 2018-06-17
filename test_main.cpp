#include<iostream>
#include"deque.h"
#include"expressao.h"

using namespace std;

int main(){
	Expressao *expressao = new Expressao[100];
	

	for(int i =0; expressao[i].getEntradaStr()!="fim"; i++){
		expressao[i].ler_entrada();
		cout << "ENTRADA: " <<  expressao[i].getEntradaStr() << " " << endl;
		expressao[i].imprime_deque();
		if (expressao[i].getEntradaStr()=="fim") break;
	}
}