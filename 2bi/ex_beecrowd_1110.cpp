/*
Dada uma pilha de n cartas enumeradas de 1 até n com a carta 1 no topo e a carta n na base.  
A seguinte operação é ralizada enquanto tiver 2 ou mais cartas na pilha.
Jogue fora a carta do topo e mova a próxima carta (a que ficou no topo) para a base da pilha.
Sua tarefa é encontrar a sequência de cartas descartadas e a última carta remanescente.
Cada linha de entrada (com exceção da última) contém um número n ≤ 50. A última linha contém 0 e 
não deve ser processada. Cada número de entrada produz duas linhas de saída. A primeira linha 
apresenta a sequência de cartas descartadas e a segunda linha apresenta a carta remanescente.

Entrada
A entrada consiste em um número indeterminado de linhas contendo cada uma um valor de 1 até 50. 
A última linha contém o valor 0.

Saída
Para cada caso de teste, imprima duas linhas. A primeira linha apresenta a sequência de cartas 
descartadas, cada uma delas separadas por uma vírgula e um espaço. A segunda linha apresenta o 
número da carta que restou. Nenhuma linha tem espaços extras no início ou no final. Veja exemplo 
para conferir o formato esperado.
*/

#include <iostream>
#include <deque>
#include <vector>

int main() {    
    int n;
    while (std::cin >> n && n != 0) {
        std::deque<int> deck;
        for (int i = 1; i <= n; ++i) {
            deck.push_back(i);
        }

        std::vector<int> discarded;
        
        while (deck.size() > 1) {
            discarded.push_back(deck.front());
            deck.pop_front();
            deck.push_back(deck.front());
            deck.pop_front();
        }

        int remaining = deck.front();
        
        std::cout << "Discarded cards: ";
        for (size_t i = 0; i < discarded.size(); ++i) {
            if (i > 0) std::cout << ", ";
            std::cout <<discarded[i];
        }
        std::cout << std::endl;

        std::cout << "Remaining card: ";
        std::cout <<remaining << std::endl;
    }
    return 0;
}
