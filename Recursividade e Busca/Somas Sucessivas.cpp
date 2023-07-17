/* (BACKES,2012) A multiplicação de dois números naturais pode ser feita através de somas sucessivas (por exemplo, 2*3=2+2+2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois números naturais.

Entradas:

Dois números naturais.
Saídas:

Resultado da multiplicação dos dois números.
Exemplo de Entrada:

3 5
Exemplo de Saída:

15 */

#include <iostream>
using namespace std;

int multiplicacao(int multiplicado, int multiplicador) {
    if (multiplicador == 0) {
        return 0;
    }
    if (multiplicador == 1) {
        return multiplicado;
    }
    return multiplicado + multiplicacao(multiplicado, multiplicador - 1);
}

int main() {
    int multiplicado;
    int multiplicador;
    cin >> multiplicado;
    cin >> multiplicador;
    cout << multiplicacao(multiplicado, multiplicador);
    return 0;
}
