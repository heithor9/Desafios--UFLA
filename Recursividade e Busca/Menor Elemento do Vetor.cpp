/* Faça um programa que recebe um vetor V de N elementos e determina, de forma recursiva, o menor elemento do vetor. Podemos usar a seguinte ideia:

O menor elemento de um vetor de uma única posição é o seu único elemento.
O menor elemento de um vetor de mais de uma posição é o menor entre o primeiro elemento e o menor do restante do vetor.
Entradas:

Tamanho N do vetor.
Elementos do vetor.
Saídas

Menor elemento do vetor.
Exemplos de Entradas e Saídas:
Entradas:
4
2 4 3 1

Saídas:
1 */

#include <iostream>
using namespace std;

int menorr (int vetor[], int tam, int i, int menor) {
    if (menor > vetor[i])
    {
        menor = vetor[i];
        return menorr(vetor, tam, ++i, menor);
    }
    else if (i == tam)
    {
        return menor;
    }
    else if (tam == 0)
    {
        return 0;
    }
    else
    return menorr(vetor, tam, ++i, menor);

}

int main (){
    int tam;
    cin >> tam;
    int vetor[tam];
    int i = 1;
    for (int i = 0; i < tam; i++)
    {
        cin >> vetor[i];
    }
    int menor = vetor[0];
    if (tam > 0)
    {
    cout << menorr(vetor, tam, i, menor);
    }
    return 0;
}
