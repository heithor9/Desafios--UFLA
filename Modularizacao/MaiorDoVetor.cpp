/* Faça um programa que determina o maior valor de um conjunto de valores.

O programa deve ter um subprograma que determina o maior elemento de um vetor. O subprograma principal deve ser responsável por realizar todas as operações de leitura e escrita.

Entradas:

O número de valores a processar;
os valores (números inteiros).
Saídas:

O maior valor.
Exemplo de entrada:

5
2 7 4 1 3
Exemplo de saída:

7  */

#include <iostream>
using namespace std;

void maior (int tam, int nums, int valor1) {
	
	valor1 = nums;
	for (int i = 0; i < tam - 1; i++)
	{
		cin >> nums;
		
		if (valor1 < nums)
		{
			valor1 = nums;
		}
	}
	cout << valor1;
}

int main()
{
	int tam, nums, grande = 0;
	cin >> tam;
	cin >> nums;
	maior (tam, nums, grande);
	return 0;
}

