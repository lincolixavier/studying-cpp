#include <iostream>
#include <list>

#define LISTA_INT list<int>
#define ITERADOR list<int>::iterator

using namespace std;

void exibir_lista(LISTA_INT lista_inteiro, ITERADOR ponteiro);

int main(void)
{

	LISTA_INT lista;
	ITERADOR ponteiro_iterador;

	for (int i = 5; i < 15; i++)
	{
		//Preenche a lista
		lista.push_back(i);
	}

	exibir_lista(lista, ponteiro_iterador);
	//É necessário passar como argumento: uma lista de inteiros e o iterator que deve ser do mesmo tipo da lista

	return 0;
}

void exibir_lista(LISTA_INT lista_inteiro, ITERADOR ponteiro)
{
	//Função para exibir a lista

	cout << "\n---------------------------------\n";

	for (ponteiro = lista_inteiro.begin(); ponteiro != lista_inteiro.end(); ponteiro++)
	{
		cout << *ponteiro << ' ';
	}

	cout << "\n---------------------------------\n";
}