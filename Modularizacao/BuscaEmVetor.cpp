/* Escreva uma função que recebe um vetor de inteiros, o tamanho do vetor, e um inteiro. A função retorna 1 se o inteiro estiver no vetor, 0 senão. Escreva um programa para utilizar esta função.

Entradas:

Tamanho do vetor
Elementos do vetor
Um numero a ser procurado
Saídas:

1 caso o elemento tenha sido encontrado
0 caso o contrário
Exemplo de Entradas:

5
2 4 6 8 10
6
Exemplo de Saída:

1
Exemplo de Entradas:

7
10 20 30 40 50 60 70 
15
Exemplo de Saída:

0 */

#include <iostream>
using namespace std;
int main()
{
	int tam;
	cin >> tam;
	int vet[tam];
	
	for (int i = 0; i < tam; i++)
	{
		cin >> vet[i];
	}
	
	int procurado;
	cin >> procurado;
	bool condicao = false;
	for(int i = 0; i < tam; i++)
	{
		if (vet[i] == procurado)
		{
			condicao = true;
		}
	}
	
	if (condicao)
	{
		cout << "1";
	}
	
	else
	{
		cout << "0";
	}
	return 0;
}
