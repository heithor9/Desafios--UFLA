/* Faça um programa que leia um vetor de números inteiros, encontre e escreva o maior e o menor elemento e suas respectivas posições.

Entradas:

a quantidade de elementos do vetor
cada elemento do vetor
Saídas:

o maior valor do vetor
o menor valor do vetor
o índice do maior valor do vetor
o índice do menor valor do vetor
É obrigatório que a leitura de todos os elementos do vetor seja feita antes do processamento dos elementos do vetor.

Exemplo de entrada:

4
2 5 7 3
Exemplo de saída:

7 2 2 0
*/

#include <iostream>
using namespace std;
int main()
{
	int tam;
	
	cin >> tam;
	
	int vetor[tam];
	
	for (int i = 0; i < tam; i++)
	{
		cin >> vetor[i];
	}
	
	int cont1 = 0;
	int num1 = vetor[0];
	
	for (int i = 1; i < tam; i++)
	{
		if (num1 < vetor[i] )
		{
			num1 = vetor[i];
			cont1 = i;
		}
	}
	
	int num2 = vetor[0];
	int cont2 = 0;
	for (int i = 1; i < tam; i++)
	{
		if (num2 > vetor[i] )
		{
			num2 = vetor[i];
			cont2 = i;
		}
	}
	
	cout << num1 << " " << num2 << " " << cont1 << " " << cont2;
	
	return 0;
}

