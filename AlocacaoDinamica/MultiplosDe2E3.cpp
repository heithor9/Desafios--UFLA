/*  Faça um programa que receba a quantidade de números que o usuário digitará e em seguida preencha um vetor com os números inteiros, calcule e mostre: os números múltiplos de 2; os números múltiplos de 3; e os números múltiplos de 2 e 3. Os números múltiplos de 2 e 3 podem aparecer nos casos isolados. Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.

Observação: o vetor deverá ser alocado dinamicamente

Entradas:

Quantidade de números a serem inseridos pelo usuário/li>
Sequência de números inteiros
Saídas:

Números que são múltiplos de 2;
Números que são múltiplos de 3;
Números que são múltiplos de 2 e 3 simultaneamente.
Exemplo de entrada:

7
4 6 3 9 7 10 13
Exemplo de saída:

4 6 10
6 3 9 
6
*/


#include <iostream>
using namespace std;

struct vetores {
    int geral;
    int par;
    int impar;
    int par_impar;
};

int main()
{
    int num;
    cin >> num;
    vetores* vet = new vetores[num];
    for (int i = 0; i < num; i++)
    {
        cin >> vet[i].geral;
    }
    bool verdadeiro = false;
    for (int i = 0; i < num; i++)
    {
        if (vet[i].geral % 2 == 0)
        {
            vet[i].par = vet[i].geral;
            cout << vet[i].par << " ";
            verdadeiro = true;
        }
        if (i == num - 1 and verdadeiro == true)
        {
            cout << endl;
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (vet[i].geral % 3 == 0)
        {
            vet[i].impar = vet[i].geral;
            cout << vet[i].impar << " ";
            verdadeiro = true;
        }
        if (i == num - 1 and verdadeiro == true)
        {
            cout << endl;
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (vet[i].geral % 2 == 0 and vet[i].geral % 3 == 0)
        {   
            vet[i].par_impar = vet[i].geral;
            cout << vet[i].par_impar << " ";
            verdadeiro = true;
        }
    }
    if (verdadeiro == false)
    {
        cout << "0";
    }
    
    return 0;   
}

