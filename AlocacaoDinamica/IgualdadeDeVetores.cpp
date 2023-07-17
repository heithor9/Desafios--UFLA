/* Dois vetores são considerados iguais se ambos contiverem o mesmo conjunto de elementos, embora as permutações de elementos possam ser diferentes.

Faça um programa para receba o tamanho N de dois vetores A e B de igual tamanho e descobra se os vetores são iguais ou não.

Se forem iguais imprima "IGUAIS", caso contrário imprima "DIFERENTES".

Observação: não haverá elementos repetidos em cada vetor.

Exemplo de Entrada:

5
1 2 3 4 5
5 4 3 2 1
Exemplo de Saída:

IGUAIS
Exemplo de Entrada:

5
1 2 3 6 5
5 4 3 2 1
Exemplo de Saída:

DIFERENTES  */

#include <iostream>
using namespace std;


int main()
{
	int tam;
	cin >> tam;
	int A[tam];
	int B[tam];
	int aux;
	
	for (int i = 0; i < tam; i++)
	{
		cin >> A[i];
	}
	
	for (int i = 0; i < tam - 1; i++)
	{

		for (int j = i+1; j <= tam - 1; j++)
		{
			if (A[j] < A[i])
			{

				aux = A[j];
				A[j] = A[i];
				A[i] = aux;
			}
		}
	}
	
	for (int i = 0; i < tam; i++)
	{
		cin >> B[i];
	}
	
	for (int i = 0; i < tam; i++)
	{

		for (int j = i+1; j <= tam; j++)
		{
			if (B[j] < B[i])
			{

				aux = B[j];
				B[j] = B[i];
				B[i] = aux;
			}
		}
	}
	
	
	bool resposta = true;
	
	for (int i = 0; i < tam; i++)
	{
		if (A[i] != B[i])
		{
			resposta = false;
		}
	}
	

	if (resposta)
	{
		
		cout << "IGUAIS";
	}
	
	else
	{
		cout << "DIFERENTES";
	}
	return 0;
}

