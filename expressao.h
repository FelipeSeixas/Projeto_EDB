#ifndef EXPRESSAO_H
#define EXPRESSAO_H
#include"deque.h"
 class Expressao {
	private:
		Deque deque_operador;
		Deque deque_numero;
		string entrada_str;
		char *entrada_char;
		int num_parenteses1; // inicializar com zero
		int num_parenteses2; // inicializer com zero
		int tam; // tamanho da expressao em caracteres
		int operador_ou_operando; //0 = operador; 1 = operando ---- LEMBRAR DE INICIAR COM ZERO NO CONSTRUTOR
	public:
		int eh_operador(char unity_entrada);
		int eh_numero(char unity_entrada);
		string getEntradaStr();
		void setEntradaStr(string entrada_str);
		void ler_entrada();
		void imprime_deque();
 
 };
 
 #endif