#include "fila.h" 

// inicializa a fila
fila::fila() : tam(0), cabeca(0), fim(-1) {
    cout << "Fila criada" << endl;
}

// Verifica se a fila está vazia
bool fila::estaVazia() {
    return tam == 0;
}

// Verifica se a fila está cheia
bool fila::estaCheia() {
    return tam == MAX;
}

// Retorna o tamanho
int fila::get_tam() {
    return tam;
}

// Insere no fim
void fila::inserir(int v) {
    if (estaCheia()) {
        cout << "Fila cheia" << endl;
        return;
    }
    
    fim = (fim + 1) % MAX;
    vetor[fim] = v;
    tam++;
    cout << "Valor " << v << " adicionado." << endl;
}

// Remove a cabeça
void fila::remover() {
    if (estaVazia()) {
        cout << "Fila vazia" << endl;
    }

    cout << "Valor " << vetor[cabeca] << " removido." << endl;
    cabeca = (cabeca + 1) % MAX;
    tam--;
}

// Retorna a cabeça
int fila::get_cabeca() {
    return vetor[cabeca];
}

void fila::print() {
    int aux = cabeca;

    cout << "Fila: ";
    // Percorre o vetor de maneira circular
    while (aux != fim) {
        cout << vetor[aux] << " ";
        aux = (aux + 1) % MAX;
    }
    cout << vetor[aux];
    cout << endl;
}