/* Escreva uma função que recebe um vetor de inteiros V, o tamanho N de V, e um inteiro A. A função retorna a posição de A no vetor caso ela esteja no vetor, senão retorna -1. Escreva um programa para utilizar esta função, sendo que no início o usuário deve informar o tamanho do vetor e preenchê-lo, bem como passar para o programa o valor que deseja buscar dentro dele.

Entrada:

O tamanho N do vetor;
O vetor V de inteiros.
O valor A que será procurado.
Saída:

A posição de A, caso pertença a V;
-1, caso contrário.
Exemplo de entrada:

	5
	5 4 3 2 1
	3
	
Exemplo de saída:

	2 */

#include <iostream>
using namespace std;

int posicao(int V[], int N, int A) {
	
	for (int i = 0; i < N; i++)
	{
		if (V[i] == A)
		{
			return i;
		}
	}
	
	return -1;
}


int main()
{
	int N;
	cin >> N;
	int V[N];
	
	for (int i = 0; i < N; i++)
	{
		cin >> V[i];
	}
	
	int A;
	cin >> A;
	
	cout << posicao(V, N, A);
	
	return 0;
}

