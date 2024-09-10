#include <iostream>

class Nodo {
public:
    int info;    // Dados armazenados no nó
    Nodo* prox;  // Ponteiro para o próximo nó

    // Construtor
    Nodo(int info) {
        this->info = info;
        this->prox = nullptr;
    }
};

class ListaEncadeada {
private:
    Nodo* inicio;  // Ponteiro para o primeiro nó da lista

public:
    ListaEncadeada() { this->inicio == nullptr; }
    ~ListaEncadeada() 
    {
        while(this->inicio != nullptr)
            removeInicio();
    }

    void removeInicio()
    {
        Nodo* aux;

        if(this->inicio != nullptr)
        {
            aux = this->inicio;
            this->inicio = aux->prox;
            delete aux;
        }
    }

    void InsereFim(int info)
    {
        Nodo *novo = new Nodo(info);
        Nodo *pos;

        if(this->inicio == nullptr) //lista vazia
            this->inicio = novo;
        else{
            pos = this->inicio;
            while(pos->prox != nullptr)
            {
                pos= pos->prox;
            }

        }
        
        pos->prox = novo;
    }

    void imprime()
    {
        Nodo *pos;
        pos = this->inicio;

        std::cout<<"Lista: ";
        do{
            std::cout<<pos->info << " -> ";
            pos = pos->prox;
        }while(pos!=nullptr);

        //final da lista    
        std::cout<<"#" <<std::endl;
    }
};
int main()
{
    ListaEncadeada lista;
    
    lista.InsereFim(2);
    lista.imprime();

    lista.InsereFim(3);
    lista.imprime();

    lista.removeInicio();
    lista.imprime();

    lista.removeInicio();
    lista.imprime();
    
    return 0;
}