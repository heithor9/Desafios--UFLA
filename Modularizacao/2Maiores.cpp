/* Escreva um subprograma chamado Max2. Esse subprograma deve receber um vetor de números reais, um inteiro contendo o tamanho do vetor e mais dois parâmetros reais A e B, passados por referência. Max2 não retorna valor (é uma “função void”). Este subprograma deve encontrar os dois maiores elementos do vetor e colocar o maior deles em A e o segundo maior em B.

A função principal deve passar o vetor e seu tamanho, receber os dois maiores e escrevê-los. O tamanho do vetor deve ser lido no início do programa.

Entradas:

O tamanho N do vetor;
Os N elementos do vetor, tipo real.
Saídas:

O maior elemento (A).
O segundo maior elemento (B).
Exemplo de entrada:

18
3 0 1 2 17 5 6 7 8 9 10 11 15 16 12 13 14 4
Exemplo de saída:

17 16  */


#include <iostream>
#include <cfloat>
using namespace std;

void Max2 (float vet[], int tam, float &A, float &B) {
	
	A = vet[0];
	
	for (int i = 0; i < tam; i++)
	{
		if (vet[i] > A)
		{
			A = vet[i];
		}
	}
	
	B = vet[0];
	
	for (int i = 0; i < tam; i++)
	{
		if (vet[i] > B and vet[i] != A)
		{
			B = vet[i];
		}
	}
	
}

int main()
{
	int tam;
	cin >> tam;
	float A, B;
	float vet[tam];
	
	for (int i = 0; i < tam; i++)
	{
		cin >> vet[i];
	}
	
	Max2 (vet, tam, A, B);
	
	cout << A << " " << B;
	return 0;
}

