/* Dois pilotos resolveram se desafiar para saber quem faz o melhor tempo no Autódromo Internacional de Lavras. Sabe-se que a cada km a partir do km 1 é registrado o tempo do piloto. Faça um programa que receba o nome do piloto e os tempos registrados a cada km pelo piloto e imprima quem estava na liderança a cada km e qual foi seu tempo naquele km. Considere que no km 0 o tempo é 0.

Todas as comparações podem ser feitas supondo que não haverá empate.

Entradas:

Quantidade de km em que houve medição;
nome do primeiro piloto;
tempos do primeiro piloto em cada km (números reais, numa mesma linha);
nome do segundo piloto;
tempos do segundo piloto em cada km (números reais, numa mesma linha).
Saídas:

Nome do piloto na liderança a cada km e qual o tempo do piloto;
Exemplo de Entrada:

5
Hudson
25.1 52.8 75.2 98.4 117.7
Bruno
24.9 53 75.3 97.6 118.1
Exemplo de Saída:

Bruno  24.9
Hudson  52.8
Hudson  75.2 
Bruno 97.6
Hudson 117.7 */


#include <iostream>
using namespace std;
int main()
{
	int NumVoltas;
	
	cin >> NumVoltas;
	
	string piloto1, piloto2;
	float tempos1[NumVoltas], tempos2[NumVoltas];
	
	cin >> piloto1;
	
	for (int i = 0; i < NumVoltas; i++)
	{
		cin >> tempos1[i];
	}
	
	cin >> piloto2;
	
	for (int i = 0; i < NumVoltas; i++)
	{
		cin >> tempos2[i];
	}
	
	for (int i = 0; i < NumVoltas; i++)
	{
		if (tempos1[i] > tempos2[i])
		{
			cout << piloto2 << " " << tempos2[i] << endl;
		}
		
		else
		{
			cout << piloto1 << " " << tempos1[i] << endl;
		}
	}
	
	
	return 0;
}

