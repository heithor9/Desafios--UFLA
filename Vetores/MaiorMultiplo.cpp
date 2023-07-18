/* Crie um programa que preencha um vetor com 10 números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números múltiplos de 2, e o segundo deve conter os números múltiplos de 3. O seu programa deverá também imprimir no dispositivo de saída padrão o maior múltiplo de 2 e o maior múltiplo de 3, associados aos vetores resultantes, respectivamente.

Assuma que todos os dados de entrada serão fornecidos em uma única linha. Assuma também que sempre haverá no mínimo um número múltiplo de 2 e um número múltiplo de 3 nos dados de entrada. E caso um número seja múltiplo de 2 e 3 simultaneamente, este número deverá aparecer em ambos os vetores resultantes.

Entradas:

Dez números inteiros representando o vetor geral.
Saídas:

Vetor resultante com os números inteiros múltiplos de 2. Na mesma ordem em que apareceram no vetor de entrada.
Maior número múltiplo de 2 do primeiro vetor resultante (Número Inteiro).
Vetor resultante com os números inteiros múltiplos de 3. Na mesma ordem em que apareceram no vetor de entrada.
Maior número múltiplo de 3 do segundo vetor resultante (Número Inteiro).
Exemplo de Entrada:

10 40 13 -70 85 90 54 69 78 32 
Exemplo de Saída:

10 40 -70 90 54 78 32
90
90 54 69 78
90
Exemplo de Entrada:

-80 -75 -3 -7 -8 -9 -220 -78 -90 -1000
Exemplo de Saída:

-80 -8 -220 -78 -90 -1000
-8
-75 -3 -9 -78 -90
-3
Exemplo de Entrada:

0 78 200 -80 -60 75 66 12 24 91 
Exemplo de Saída:

0 78 200 -80 -60 66 12 24
200
0 78 -60 75 66 12 24
78  */


#include <iostream>
using namespace std;

int main()
{
	int vetorGeral[10];
	
	for (int i = 0; i < 10; i++)
	{
		cin >> vetorGeral[i];
	}
	
	int cont1 = 0;
	int vetorPar[cont1];
	int maior1 = vetorGeral[0];
	
	for (int i = 0; i < 10; i++)
	{
		if (vetorGeral[i] % 2 == 0)
		{
			vetorPar[cont1] = vetorGeral[i];
			cout << vetorPar[cont1] << " ";

			
			if (vetorPar[cont1] > maior1)
			{
				maior1 = vetorPar[cont1];
			}
		}
		
	cont1++;
	}
	cout << endl;
	cout << maior1;
	cout << endl;
	
	
	
	//________________________________________________
	
	int maior2 = vetorGeral[0];
	int cont2 = 0;
	int vetorImpar[cont2];
	
	for (int i = 0; i < 10; i++)
	{
		if (vetorGeral[i] % 3 == 0)
		{
			vetorImpar[cont2] = vetorGeral[i];
			cout << vetorImpar[cont2] << " ";

			
			if (vetorImpar[cont2] > maior2)
			{
				maior2 = vetorImpar[cont2];
			}
			
		}
	
	cont2++;
	}
	
	cout << endl;
	cout << maior2;

	
    return 0;
}
