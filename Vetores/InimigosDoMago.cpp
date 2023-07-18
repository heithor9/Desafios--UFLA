/* Um poderoso mago está cercado por seus inimigos e precisa utilizar sua magia para causar dano em área, esse feitiço causa 1 de dano a todos os adversários e se pelo menos um inimigo for vencido o mago irá relançar a magia até que nenhum outro possa ser derrotado ou que todos já estejam derrotados.

Faça um programa que preencha um vetor com números inteiros representando a vida dos inimigos do mago, seu programa deverá então simular o lançamento do feitiço e caso algum inimigo seja derrotado (representado pela vida atingir o valor 0) o programa irá relançar a magia, ao final da execução deverá ser mostrado na saída padrão a quantidade de inimigos que foram derrotados na batalha. Por exemplo, se tiver 3 inimigos com vidas 1, 4 e 3, ao lançar a primeira magia um inimigo é derrotado e o vetor fica com 0, 3 e 2. Ao lançar novamente o feitiço, não é derrotado nenhum inimigo e termina a batalha.

Entradas:

Número inteiro indicando a quantidade de inimigos.
Elementos do vetor representando a vida dos inimigos.
Saídas:

Quantidade de inimigos derrotados.
Exemplo de Entrada:

5
6 7 3 1 2
Exemplo de Saída:

3
*/

#include <iostream>
using namespace std;

int main() {
    int numInimigos;
    cin >> numInimigos;

    int vidas[numInimigos];

    for (int i = 0; i < numInimigos; i++) {
        cin >> vidas[i];
    }

    int derrotados = 0;
    bool houveDerrotas = true;

    while (houveDerrotas) {
        houveDerrotas = false;

        for (int i = 0; i < numInimigos; i++) {
            if (vidas[i] > 0) {
                vidas[i]--;
                if (vidas[i] == 0) {
                    derrotados++;
                    houveDerrotas = true;
                }
            }
        }
    }

    cout << derrotados << endl;

    return 0;
}


