#include <iostream>
//==============================================================
class Nodo {
    public:
        int info;  // Dados armazenados no nó
        Nodo* prox;  // Ponteiro para o próximo nó

        // Construtor
        Nodo(int info) {
            this->info = info;
            this->prox = NULL;
        }
};

//==============================================================
class ListaEncadeada {
    private:
        Nodo* inicio;  // Ponteiro para o primeiro nó da lista

    public:
        // Construtor
        ListaEncadeada() {
            std::cout << "Lista criada e inicializada" << std::endl;
            this->inicio = NULL;  // Inicialmente, a lista está vazia
            imprime();
        }

        ~ListaEncadeada() { // Importante! Desalocar toda a memória alocada
            std::cout << "Desalocando Lista ..." << std::endl;
            while (this->inicio!=NULL)
                remove_inicio();
            std::cout << "Lista desalocada"<< std::endl; 
            imprime();
        }

        // Adicionar um novo nó no início da lista
        void remove_inicio(){
            Nodo *aux;
            std::cout << "Remove do início" << std::endl;
            if (this->inicio != NULL){ 
                aux = this->inicio; 
                // o início passa a apontar para o segundo elemento da lista
                this->inicio = aux->prox; 
                // apaga o primeiro elemento da lista
                delete aux;
            }
        }

        // Adicionar um novo nó no início da lista
        void insere_inicio(int info) {
            std::cout << "Insere "<< info<<" no início" << std::endl;
            Nodo* novo = new Nodo(info);  // Criação de um novo nó
            novo->prox = this->inicio;  // O novo nó aponta para o antigo primeiro nó
            this->inicio = novo;  // O novo nó se torna o primeiro nó
        }

        // Método para exibir os elementos da lista
        void imprime() {
            std::cout << "Lista:"<<std::endl<<"   ";
            Nodo* pos = this->inicio;
            std::cout << "Início -> ";
            while (pos != NULL) {
                std::cout << pos->info << " -> ";
                pos = pos->prox;
            }
            std::cout << "#" << std::endl<<std::endl;  // símbolo, para indicar que a lista terminou
        }
        
        Nodo *busca(int info)
        {
          Nodo *pos =this->inicio;
          do{
           if(pos->info==info)
             return pos;
          pos= pos-> prox;
          }while(pos !=nullptr);
        }
};

int main(){
    ListaEncadeada lista;  
    
    for(int i=0; i<3; i++)
    {
      lista.insere_inicio(i);
      lista.imprime();
    
    }
     for(int i=0; i<3; i++)
    {
      lista.remove_inicio();
      lista.imprime();
    }
    return 0;
}