/* A Operação Lava Jato deflagrada pela Polícia Federal em 2014 tem descoberto inúmeros casos de corrupção envolvendo políticos, grandes empresários, doleiros, entre outros. A operação é dividida em fases e, geralmente, essas fases possuem um número e um nome.

Suponha que alguém criou um arquivo chamado fases.txt e colocou nele o número e o nome de várias das operações da Lava Jato. Faça um programa que leia esse arquivo e um número K da entrada padrão e mostre na saída padrão os nomes das K primeiras operações que aparecem no arquivo ordenadas de forma decrescente pelo número da operação e as demais em ordem crescente.

Seu programa deve usar o método SelectionSort e não pode fazer uso de vetores auxiliares.

Obs: considere que os nomes das operações não possuem espaços e que o valor de K é no mínimo zero e no máximo o número de operações presentes no arquivo.

Entradas:

Arquivo fases.txt contendo em cada linha um número e um nome de uma fase da Lava Jato.
Um número K, sendo 0 <= K <= número de operações existentes no arquivo.
Saídas:

Os nomes das K primeiras operações do arquivo em ordem decrescente de número (um em cada linha).
Os nomes operações restantes do arquivo em ordem crescente de número (um em cada linha).
Exemplo de Entrada (arquivo fases.txt):

33 RestaUm
7 JuizoFinal
31 Abismo
26 Xepa
10 QuePaisEhEsse
23 Acaraje
17 Pixuleco
Exemplo de Entrada (entrada padrão):

4
Exemplo de Saída:

RestaUm
Abismo
Xepa
JuizoFinal
QuePaisEhEsse
Pixuleco
Acaraje */


#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct dados {
    int numero;
    string nome;
};

void selection_sort(dados vetor[], int tam, int entrada) {
    int menor;
    dados aux_troca;
    for (int indice = 0; indice < entrada; indice++)
    {
        menor = indice;
        for (int j = indice + 1; j < entrada; j++) {
            if (vetor[j].numero > vetor[menor].numero) {
                menor = j;
            }
        }
        aux_troca = vetor[indice];
        vetor[indice] = vetor[menor];
        vetor[menor] = aux_troca;
        
    }

    for (int i = 0; i < entrada; i++) {
        cout << vetor[i].nome << endl;
    }

    for (int indice = entrada; indice < tam; indice++)
    {
        menor = indice;
        for (int j = indice + 1; j < tam; j++) {
            if (vetor[j].numero < vetor[menor].numero) {
                menor = j;
            }
        }
        aux_troca = vetor[indice];
        vetor[indice] = vetor[menor];
        vetor[menor] = aux_troca;
        
    }

    for (int i = entrada; i < tam; i++) {
        cout << vetor[i].nome << endl;
    }


    
    

}


int main() {
    ifstream arquivo("fases.txt");
    dados* vet = new dados[20];
    int linha = 0;
    while (arquivo >> vet[linha].numero >> vet[linha].nome) {
        linha++;
    }
    int entrada;
    cin >> entrada;
    selection_sort(vet, linha, entrada);
    delete[] vet;
    return 0;
}
