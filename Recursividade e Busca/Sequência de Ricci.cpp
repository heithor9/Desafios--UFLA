/* A sequência de Ricci é uma sequência bastante semelhante à de Fibonacci, diferindo desta apenas pelo fato que os dois primeiros termos da sequência ( F(0) e F(1) ) devem ser definidos pelo usuário.

Sabendo-se que a sequência de Fibonacci é definida por:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) , n > 2
Crie um programa que imprima os n primeiros termos da sequência de Ricci, utilizando um subprograma recursivo que retorna o n-ésimo termo da referida série.

Entrada:

Os valores iniciais da série de Ricci ( F(0) e F(1) );
Os número de termos dessa sequência a serem impressos.
Saída:

Os n termos dessa sequência.
Exemplo de entrada:

5 8
6
Exemplo de saída:

5 8 13 21 34 55 */

#include <iostream>
using namespace std;

void ricci(int inicial1, int inicial2, int repeticoes, int k, int* vet) {
    if (k < repeticoes) {
        vet[k] = vet[k - 1] + vet[k - 2];
        ricci(inicial1, inicial2, repeticoes, k + 1, vet);
    }
}

int main() {
    int inicial1, inicial2, repeticoes;
    cin >> inicial1;
    cin >> inicial2;    
    cin >> repeticoes;
    
    int* vet = new int[repeticoes];
    vet[0] = inicial1;
    vet[1] = inicial2;
    
    ricci(inicial1, inicial2, repeticoes, 2, vet);
    
    for (int i = 0; i < repeticoes; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    
    return 0;
}
