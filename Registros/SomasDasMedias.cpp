/*  Faça um programa para calcular a média de notas de uma determinada turma. Faça um registro para guardar as informações do aluno, onde irá receber o número de matrícula (inteiro), nome, 2 notas de 0 - 10(float) e o sexo(M - Masculino ou F - Feminino). Primeiro o programa deve solicitar o número de alunos e depois as informações de cada aluno. A saída do programa deve ter a média geral das notas, a média das pessoas do sexo masculino e a média das pessoas do sexo feminino.

Entradas:

Número inteiro de alunos.
Número de matrícula(inteiro), nome, 2 notas(float) e sexo(char).
Saídas:

Média geral dos alunos.
Média das pessoas do sexo masculino.
Média das pessoas do sexo feminino.
Exemplo de Entrada:

3
1 amanda 5 10 F
2 flavio 2.5 9.1 M
3 renato 8.4 5.1 M
Exemplo de Saída:

6.68
6.275
7.5  */

#include <iostream>
using namespace std;

struct info_aluno {
	int matricula;
	string nome;
	float nota1, nota2;
	char sexo;
};

int main()
{
	int num_alunos;
	
	cin >> num_alunos;
	
	info_aluno aluno[num_alunos];
	
	for (int i = 0; i < num_alunos; i++)
	{
		cin >> aluno[i].matricula >> aluno[i].nome >> aluno[i].nota1 >> aluno[i].nota2 >> aluno[i].sexo;
	}
	
	
	float mediaM = 0;
	int contadorM = 0;
	float mediaF = 0;
	int contadorF = 0;
	
	for (int i = 0; i < num_alunos; i++)
	{
		if (aluno[i].sexo == 'M')
		{
			mediaM += (aluno[i].nota1 + aluno[i].nota2) / 2;
			contadorM++;
		}
		
		if (aluno[i].sexo == 'F')
		
		{
			mediaF += (aluno[i].nota1 + aluno[i].nota2) / 2;
			contadorF++;
		}
	}
	
	mediaM = mediaM / contadorM;
	mediaF = mediaF / contadorF;
	
	float MediaGeral = 0;
	for (int i = 0; i < num_alunos; i++)
	{
		MediaGeral += (aluno[i].nota1 + aluno[i].nota2);
	}
	
	MediaGeral = MediaGeral / (num_alunos * 2);
	
	cout << MediaGeral << endl;
	cout << mediaM << endl;
	cout << mediaF;
	return 0;
}

