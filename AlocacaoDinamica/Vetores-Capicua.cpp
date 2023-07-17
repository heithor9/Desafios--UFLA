/* Um número inteiro não negativo é dito ser capicua quando lido da esquerda para a direita é o mesmo que quando lido da direita para a esquerda. O ano 2002, por exemplo, é capicua. Implemente um programa que receba a quantidade de dígitos que serão inseridos e armazene-os em um vetor alocado dinamicamente. O programa deverá responder se os dígitos lidos compõem um número capicua ou não. Em caso positivo, escreva "sim", em caso negativo, escreva "nao". Além do resultado final, o programa deve, enquanto as comparações forem verdadeiras, escrever as posições e os elementos comparados.

Entrada do programa:

Quantidade de dígitos a serem inseridos
Sequência de dígitos a serem armazenados (mesma linha).
Saída do programa:

Posições e valores comparados enquanto as comparações forem verdadeiras. Uma palavra ("sim" ou "nao" - em minúsculas, sem acentos) que indica se o número é capicua.
Exemplo de entrada do programa:

6
1 2 3 3 2 1
Exemplo de saída do programa:

0 1 5 1 1 2 4 2 2 3 3 3
sim
Exemplo de entrada do programa:

11
1 2 3 4 5 5 4 3 2 1 0
Exemplo de saída do programa:

nao
Exemplo de entrada do programa:

11
1 2 3 4 5 5 0 4 3 2 1
Exemplo de saída do programa:

0 1 10 1 1 2 9 2 2 3 8 3 3 4 7 4
nao   */


#include <iostream>
using namespace std;

bool verificaCapicua(int* vetor, int tamanho)
{
    int i = 0;
    int j = tamanho - 1;

    while (i < j)
    {
        if (vetor[i] != vetor[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void imprimeComparacoes(int* vetor, int tamanho)
{
    int i = 0;
    int j = tamanho - 1;
    bool capicua = verificaCapicua(vetor, tamanho);
    while (i < j and vetor[i] == vetor[j])
    {   
        cout << i << " " << vetor[i] << " " << j << " " << vetor[j] << " ";
        i++;
        j--;
        
    }
}

int main()
{
    int tam;
    cin >> tam;

    int* vet = new int[tam];

    for (int i = 0; i < tam; i++)
    {
        cin >> vet[i];
    }

    bool capicua = verificaCapicua(vet, tam);

    if (capicua)
    {
        imprimeComparacoes(vet, tam);
        cout << endl << "sim";
    }
    else
    {
        imprimeComparacoes(vet, tam);
        cout << endl << "nao";
    }

    delete[] vet;

    return 0;
}
