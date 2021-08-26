#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{

    queue<string> Cards;

    Cards.push("Dragão Branco de Olhos Azuis");
    Cards.push("Mago Negro");
    Cards.push("Dragão Negro de Olhos Vermelho");
    Cards.push("Mago do Tempo");
    Cards.push("Polimerização");

    cout << "Tamanho da fila e de " << Cards.size() << " Cards \n  -- Merendeira esta disbuindo os lanches \n";
    cout << "_________________________________ \n";
    int tam = Cards.size();

    while (!Cards.empty())
    {
        cout << "O " << Cards.front() << " Pegar o lanche e sair da fila" << endl;
        Cards.pop();
    }
    cout << "_________________________________ \n A fila esta vazia.";
    return 0;
}