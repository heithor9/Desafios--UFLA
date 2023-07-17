/* Faça um programa que lê os dados (nome e data de nascimento) de n pessoas, e que exiba o nome da pessoa mais velha. Em caso de empate, a resposta deve ser a pessoa que apareceu antes na entrada dos dados.

Cada pessoa deverá ser representada por um registro, sendo que a data de nascimento deverá ser representada por um outro registro com dia, mês e ano.

Obs.: Registros em Python são implementados como dicionários

Entrada:

A quantidade de pessoas que serão lidas (um número inteiro).
Os dados de cada pessoa (nome, dia de nascimento, mês de nascimento e ano de nascimento). Os nomes não terão caracteres brancos, e os dados serão lidos na mesma linha.
Saída:

O nome da pessoa mais velha
Exemplo de entrada:

4
Joao 4 12 1990
Jose 31 1 1991
Chico 20 6 1989
Maria 20 4 1991
Exemplo de saída:

Chico */


#include <iostream>
using namespace std;

struct nascimento {
	int dia;
	int mes;
	int ano;
};


struct informacoes {
	string nome;
	nascimento data;
};

int main()
{
	informacoes info;

	int tam;
	cin >> tam;
	int MaisVelho = 0;
	informacoes individuo[tam];
	
	for (int i = 0; i < tam; i++)
	{
		cin >> individuo[i].nome >> individuo[i].data.dia >> individuo[i].data.mes >> individuo[i].data.ano;
	}
	
	for (int i = 0; i < tam - 1; i++)
	{
		if (individuo[i].data.ano < individuo[i+1].data.ano) 
		{
			MaisVelho = i;
		}
		
		if (individuo[i].data.ano == individuo[MaisVelho].data.ano)
		{
			if (individuo[i].data.mes < individuo[MaisVelho].data.mes)
			{
				MaisVelho = i;
			}
		}
		
		if (individuo[i].data.ano == individuo[MaisVelho].data.ano)
		{
			if (individuo[i].data.mes == individuo[MaisVelho].data.mes)
			{
				if (individuo[i].data.dia < individuo[MaisVelho].data.dia)
				{
					MaisVelho = i;
				}
			}
		}
		
		if (individuo[i].data.ano == individuo[MaisVelho].data.ano)
		{
			if (individuo[i].data.mes == individuo[MaisVelho].data.mes)
			{
				if (individuo[i].data.dia == individuo[MaisVelho].data.dia)
				{
					MaisVelho = i;
				}
			}
		}
	}
	
	cout << individuo[MaisVelho].nome;
	
	return 0;
}

