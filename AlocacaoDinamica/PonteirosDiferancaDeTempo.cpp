/* Houve uma pane no sistema de contagem de tempo das Olimpíadas, e Comitê Olímpico Internacional (COI), pediu para você fazer um programa que, dado o tempo de cada atleta em uma prova da corrida de 100m rasos, calcule a diferença de tempo de todos os competidores para o primeiro colocado.

Seu programa deverá usar um registro para guardar o tempo (ponto flutuante) dos oito atletas da prova e os dados passados pelo usuário devem ser guardados em um registro alocado dinamicamente. Seu programa deverá então encontrar o primeiro colocado, e calcular a diferença de tempo dos demais atletas para o tempo dele (essas diferenças de tempo também devem ser guardadas em memória alocada dinamicamente). Ao exibir as diferenças de tempo, no caso do atleta que ganhou a prova (cuja diferença seria zero), escreva o tempo dele na prova.

Entradas:

O tempo de oito atletas em uma prova de corrida dos 100m rasos.
Saídas:

A diferença de tempo do primeiro colocado para cada um dos demais oito atletas (na ordem em que os dados foram recebidos). Obs: no lugar do primeiro colocado deve ser exibido o tempo dele na prova.
Exemplo de Entrada:

10.5
10.2
10.6
10.8
10.1
10.7
11
11.1
Exemplo de Saída:

0.4
0.1
0.5
0.7
10.1
0.6
0.9
1  */


#include <iostream>
#include <iomanip>
using namespace std;

struct atletas {
	float a,b,c,d,e,f,g,h;
	float vet[8] = {a,b,c,d,e,f,g,h};
	float tempa, tempb, tempc, tempd, tempe, tempf, tempg, temph;
	float vetor[8] = {tempa, tempb, tempc, tempd, tempe, tempf, tempg, temph};

};

int main()
{
	atletas *w = new atletas;

	for (int i = 0; i < 8; i++)
	{
		cin >> w->vet[i];
	}
	
	float menor = w->vet[0];
	
	for (int i = 0; i < 8; i++)
	{
		if (w->vet[i] < menor)
		{
			menor = w->vet[i];
		}
	}
		
	float diferenca;
	
	for (int i = 0; i < 8; i++)
	{
		if (w->vet[i] > menor )
		{
			diferenca = w->vet[i] - menor;
			w->vetor[i] = diferenca;
			cout << setprecision(1) << fixed << w->vetor[i] << endl;
		}
		
		else if (w->vet[i] == menor) {
			w->vetor[i] = menor;
			cout << setprecision(1) << fixed << w->vetor[i] << endl;
		}
	}
	
	
	return 0;
}

