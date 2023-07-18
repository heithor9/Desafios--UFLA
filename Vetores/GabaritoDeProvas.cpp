/* Escreva um algoritmo que leia um vetor de 10 posições do tipo caractere, que representa o gabarito de uma prova. Em seguida leia 2 vetores que representam as provas de 2 alunos. Escreva a quantidade de questões que o aluno acertou e se o aluno acertar 6 ou mais questões, escreva "APROVADO", e "REPROVADO" se o aluno acertou menos que 6 questões.

Obs.: Considere que não existirão vetores vazios

Entradas:

vetor[10] (char)
O vetor prova de cada um dos 2 alunos
Saídas:

Número (int)de acertos de cada aluno
"APROVADO" se o número de acertos for maior ou igual a 6
ou "REPROVADO" se o número de acertos for menor que 6
Exemplo de Entrada:

E C A D C A D C C B
A B A D E A E C C B
D C C E C A D C D A
Exemplo de Saída:

6
APROVADO
5
REPROVADO   */


#include <iostream>
using namespace std;

int main() {

    char vetor[10];
    char vetorAluno1[10];
    char vetorAluno2[10];
	int contador = 0;
	int contador2 = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> vetor[i];
	}
	
    for (int i = 0; i < 10; i++) {
        cin >> vetorAluno1[i];
		if (vetor[i] == vetorAluno1[i]) 
            contador++;
    }

    for (int i = 0; i < 10; i++) {
        cin >> vetorAluno2[i];
        if (vetor[i] == vetorAluno2[i]) 
            contador2++;
    }

    if (contador >= 6) {
        cout << contador << endl << "APROVADO" << endl;
    } else {
        cout << contador << endl << "REPROVADO" << endl;
    }

    if (contador2 >= 6) {
        cout << contador2 << endl << "APROVADO" << endl;
    } else {
        cout << contador2 << endl << "REPROVADO" << endl;
    }

    return 0;
}


