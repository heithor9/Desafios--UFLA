/* pós a aposentadoria do Batman, Gotham City tem sofrido vários ataques a bancos, joalherias e outros empreendimentos de altos valores. Muitos vilões, inclusive, se uniram em um mesmo plano para tentar saquear a cidade. Para auxiliar a cidade, a polícia decidiu contratar um especialista para criar um programa que armazene as seguintes informações: i) um registro para armazenar vilões e seus respectivos alvo ii) um registro para armazenar o nome do plano, nome do vilão envolvido e montante total de prejuízo causado por esse vilão. Seu objetivo agora é, dado um alvo e um plano, apontar o valor total de prejuízo causado pelos vilões envolvidos nesse plano.

Entradas:

Quantidade de vilões a serem cadastrados.
Uma relação contendo nome do vilão e seu alvo. Considere que não há espaços no nome do vilão e do alvo.
Quantidade de planos a serem cadastrados.
Uma relação contendo nome do plano, nome do vilão e prejuízo causado por ele. Considere que não há espaços no nome do vilão e do plano. O prejuízo causado deverá ser armazenado como um inteiro.
Nome de um alvo para a busca.
Saídas:

Nomes dos planos e valor do prejuízo causado pelo(s) vilão(ões). Caso um plano tenha mais de uma vilão que tenha como objetivo o mesmo alvo, ambos devem aparecer na saída. Caso não haja nenhum plano, deve ser impresso -1.
Exemplo de Entrada:

8
Coringa BancoCentral
Coringa JoalheriaZil
Pinguim JoalheriaZil
Charada BancoCentral
Charada BancoFolz
Espantalho JoalheriaZil
Espantalho MuseuExpo
DrFrio SeguradoraAliz
13
AgoraVai Pinguim 100
MaisUmaVez Pinguim 100
NovaTentativa Pinguim 200
DeNovo Coringa 212
ElDorado Coringa 105
DeNovo Charada 150
EMinha Charada 300
DeNovo Dalton 150
LavasVesuvio Pinguim 200
LavasVesuvio MadameMin 50
EMinha Espantalho 200
ElDorado Espantalho 300
ElDorado Pinguim 150
BancoCentral 
Exemplo de Saída:

DeNovo 212
ElDorado 105
DeNovo 150
EMinha 300  */


#include <iostream>

using namespace std;

struct Viloes_Alvos {
    string nome;
    string alvo;
};

struct Planos_Vilao {
    string nome;
    string vilao_envolvido;
    int prejuizo;
};

int main() {
    
    int entrada1;
    cin >> entrada1;
    Viloes_Alvos vilao[entrada1];
    for (int i = 0; i < entrada1; i++)
    {
        cin >> vilao[i].nome >> vilao[i].alvo;
    }
    
    int entrada2;
    cin >> entrada2;

    Planos_Vilao plano[entrada2];
    for (int i = 0; i < entrada2; i++)
    {
        cin >> plano[i].nome >> plano[i].vilao_envolvido >> plano[i].prejuizo;
    }
    
    string nomeAlvo;
    cin >> nomeAlvo;
    string nome_procurado;
    bool existe = true;
    if (existe) { 
    for (int  i = 0; i < entrada1; i++)
    {
        if (vilao[i].alvo == nomeAlvo)
        {
            nome_procurado = vilao[i].nome;

                for (int j = 0; j < entrada2; j++)
                {
                    if (plano[j].vilao_envolvido == nome_procurado)
                    {
                        existe = false;
                        cout << plano[j].nome << " " << plano[j].prejuizo << endl;
                    }
                }
            }
        }
    }

    if (existe)
    cout << "-1";    

    return 0;
}
