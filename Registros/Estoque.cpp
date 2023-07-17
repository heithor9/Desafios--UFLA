/* Papai Noel recebeu muitas cartas de crianças pedindo presentes para o natal. Agora, ele precisa catalogar os presentes e verificar se os brinquedos produzidos pelos duendes ao longo do ano serão o suficiente. Você deverá ajudar o papai noel a resolver este problema.

O seu programa utilizará dois registros. O primeiro registro representa uma Cartinha, com os campos nome da criança e presente pedido. O segundo registro representa um Brinquedo, com os campos nome do brinquedo, quantidade disponível, e quantidade pedida.

O seu programa irá receber como entrada os nomes das crianças e seus pedidos de presentes, e também os nomes e quantidades disponíveis de cada brinquedo. Seu programa irá então exibir quais os brinquedos não terão quantidade disponível suficiente para atender aos pedidos. Papai Noel utilizará este programa para saber como organizar melhor o trabalho dos duendes. Obs: os nomes das crianças e dos presentes não têm espaços.

Entradas:

Número de cartinhas.
Nome da criança e presente pedido de cada cartinha.
Número de brinquedos.
Nome e quantidade disponível de cada brinquedo.
Saídas:

Nomes dos brinquedos cujas quantidades não são suficientes para atender aos pedidos.
Exemplo de Entrada:

4
João Boneco
Maria Boneco
Pedro Carrinho
Ana Bola

3
Boneco 1
Bola 0
Carrinho 1
Exemplo de Saída:

Boneco Bola
Exemplo de Entrada:

5
João Videogame
Maria Boneca
Amanda Boneca
Juliana Boneca
Pedro Videogame

3
Bola 5
Videogame 2
Boneca 2
Exemplo de Saída:

Boneca */

#include <iostream>
using namespace std;

struct pedidos {
	string nome;
	string brinquedo_pedido;
};

struct estoques {
	string brinquedo;
	int estoque_brinquedos;
	int quanto_pedida;
};

int main()
{
	int num_pedidos;
	
	cin >> num_pedidos;
	
	pedidos crianca[num_pedidos];
	
	for (int i = 0; i < num_pedidos ; i++)
	{
		cin >> crianca[i].nome >> crianca[i].brinquedo_pedido;
	}

	
	int num_brinquedos;
	
	cin >> num_brinquedos;
	
	estoques estoque[num_brinquedos];
	
	for (int i = 0; i < num_brinquedos; i++)
	{
		cin >> estoque[i].brinquedo >> estoque[i].estoque_brinquedos;
		estoque[i].quanto_pedida = 0;
	}
	
	
	
	for (int i = 0; i < num_brinquedos; i++)
	{
		for (int j = 0; j < num_pedidos; j++)
		{
			if(estoque[i].brinquedo == crianca[j].brinquedo_pedido){
				estoque[i].quanto_pedida++;
			}
		}
		if(estoque[i].estoque_brinquedos < estoque[i].quanto_pedida)
			cout << estoque[i].brinquedo << " ";
	}
	
	return 0;
}
