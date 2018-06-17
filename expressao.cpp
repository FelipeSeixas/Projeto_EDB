#include"expressao.h"
#include"deque.h"
#include<iostream>
#include<cstring>
using namespace std;

int Expressao::eh_numero(char unity_entrada){
	if(unity_entrada>='0'&&unity_entrada<='9'){
		return 1;
	}
	else return 0;
}

int Expressao::eh_operador(char unity_entrada){
	if((unity_entrada>=')'&&unity_entrada<='+')||(unity_entrada=='/')||(unity_entrada=='-')){
		return 1;
	}
	else return 0;
}

void Expressao::ler_entrada(){
	getline(cin,entrada_str);
	entrada_char=&entrada_str[0];
	tam = strlen(entrada_char);
	
	for(int i =0; i<tam; i++){
		if(eh_numero(entrada_char[i])){
			deque_numero.push_back(entrada_char[i]);
			operador_ou_operando=1;
		}
		if(eh_operador(entrada_char[i])){
			if((i==0)&&(entrada_char[i]!='(')){
				cout <<"ERRO: OPERADOR NO INICIO DA EXPRESSAO" << endl;
				break;
			}
			if(operador_ou_operando==0){
				cout << "ERRO: OPERADOR UM ATRAS DO OUTRO" << endl;
				break;
			}
			if(entrada_char[i]=='('){
				num_parenteses1++;
			}
			if(entrada_char[i]==')'){
				num_parenteses2++;
			}
			deque_operador.push_back(entrada_char[i]);
			operador_ou_operando=0;
		}
	}
} 

void Expressao::imprime_deque(){
	
	while(!deque_numero.empty()){
		deque_numero.pop_front();
	}
	cout << '\n';
		while(!deque_operador.empty()){
			deque_operador.pop_front();
	}
	cout << '\n';
}

string Expressao::getEntradaStr(){
		return entrada_str;
}
void Expressao::setEntradaStr(string entrada_str){
	this->entrada_str=entrada_str;
}