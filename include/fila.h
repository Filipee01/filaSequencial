#ifndef FILA_H
#define FILA_H

#include <iostream>
#define MAX 5

using std::cout;
using std::endl;

class fila {
    int tam; // armazena o tam atual
    int cabeca; //armazena a posicao do primeiro elemento
    int fim; // armazena a posicao do ultimo elemento
    int vetor[MAX];
public:
    fila();

    bool estaVazia();

    bool estaCheia();

    int get_tam();

    void inserir(int v);

    void remover();

    int get_cabeca();

    void print();

};

#endif //FILA_H