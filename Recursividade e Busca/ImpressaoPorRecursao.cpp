/* Crie um subprograma recursivo que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem crescente.

Entradas:

Um número inteiro
Saídas:

Uma sequência de números naturais de 0 até N
Exemplo de Entradas:

15
Exemplo de Saída:

0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 */

#include <iostream>
using namespace std;

void recursao (int n, int k) {
    cout << k << " ";
    if (k == n - 1)
    {
        cout << k + 1;
    }
    else 
        recursao(n, ++k);
}

int main() {
    int n;
    cin >> n;
    int k = 0;
    recursao(n, k);
    return 0;
}
