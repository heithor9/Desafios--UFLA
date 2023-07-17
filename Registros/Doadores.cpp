/*  ​Faça um programa que leia​ n doadores de sangue (nome e tipo sanguíneo), e guarde essas informações em um registro. Após isso, seu programa deverá ler um determinado tipo sanguíneo. O algoritmo deve então mostrar quais pessoas podem doar sangue para este tipo sanguíneo seguindo uma ordem de melhor compatibilidade, que é definida pelas seguintes regras:

Para um paciente que necessita do tipo sanguíneo A, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: A e O. 
Para um paciente que necessita do tipo sanguíneo B, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: B e O. 
Para um paciente que necessita do tipo sanguíneo AB, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: AB, A, B e O. 
Para um paciente que necessita do tipo sanguíneo O, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: O. 
Obs.: Registros em Python são implementados como dicionários

Entradas:

Um número inteiro (int) que represente a quantidade de doadores.
Nome do doador e tipo sanguíneo (ambos string, serão lidos na mesma linha).
Tipo sanguíneo do receptor (string).
Saída:

Nome das pessoas que podem doar sangue para o tipo especificado, seguindo a ordem de melhor compatibilidade (um por linha).
Obs.: Se existirem duas ou mais pessoas com o mesmo tipo sanguíneo e que possam doar, exibir o nome dessas pessoas na ordem em que os dados foram lidos.
Exemplo de Entrada:

10
Jorge O
Luiza AB
Sara A
Elder B
Matheus A
Gabriela AB
Lais A
Talita O
Simone O
Ana AB
AB
Exemplo de Saída:

Luiza
Gabriela
Ana
Sara
Matheus
Lais
Elder
Jorge
Talita
Simone  */


#include <iostream>
using namespace std;

struct dados {
	string *nome;
	string *tipo_sanguineo;
	int leitura, cont = 0;
	string receptor;
};

dados d;

void leitura() {
	
	
} 

int main()
{
	cin >> d.leitura;
	d.nome = new string[d.leitura];
	d.tipo_sanguineo = new string[d.leitura];
	
	for (d.cont = 0; d.cont < d.leitura; d.cont++)
	{
		cin >> d.nome[d.cont] >> d.tipo_sanguineo[d.cont];
	}
	
	cin >> d.receptor;

		if (d.receptor == "A") {
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "A")
				{
					cout << d.nome[i] << endl;
				}
			}
			
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "O")
				{
					cout << d.nome[i] << endl;
				}
			}
			
			
		}
		
		if (d.receptor == "B") {
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "B")
				{
					cout << d.nome[i] << endl;
				}
			}
			
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "O")
				{
					cout << d.nome[i] << endl;
				}
			}
			
				
		}
		
		if (d.receptor == "AB") {
			
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "AB")
				{
					cout << d.nome[i] << endl;
				}
			}
			
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "A")
				{
					cout << d.nome[i] << endl;
				}
			}
			
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "B")
				{
						cout << d.nome[i] << endl;
				}
			}
			
			for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "O")
				{
					cout << d.nome[i] << endl;
				}
			}	
			
		}
		
		if (d.receptor == "O") {
		
		for (int i = 0; i < d.leitura; i++)
			{
				if (d.tipo_sanguineo[i] == "O")
				{
					cout << d.nome[i] << endl;
				}
			}
			
			
		}
	
	return 0;
}


