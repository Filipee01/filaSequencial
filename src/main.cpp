#include "fila.h"

int main(void) {

    // Insere e remove valores na fila e após cada remoção ou adição exibe ela
    fila fila;
    cout << "Vazia? " << (fila.estaVazia() ? "Sim" : "Nao") << endl;
    fila.inserir(2);
    fila.print();
    cout << "Vazia? " << (fila.estaVazia() ? "Sim" : "Nao") << endl;
    
    fila.inserir(42);
    fila.print();
    fila.inserir(7);
    fila.print();
    cout << "Tamanho: " << fila.get_tam() << endl;
    
    fila.inserir(6);
    fila.print();
    fila.inserir(5);
    fila.print();
    cout << "Cheia? " << (fila.estaCheia() ? "Sim" : "Nao") << endl;
    
    fila.remover();
    fila.print();
    fila.inserir(8);
    fila.print();
    fila.remover();
    fila.print();
    fila.inserir(72);
    fila.print();
    fila.remover();
    fila.print();
    fila.inserir(99);
    fila.print();
    cout << "Elemento do top: " << fila.get_cabeca() << endl;


    return 0;
}