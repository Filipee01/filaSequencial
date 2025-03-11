# 👨‍💻 Fila Sequencial

## Descrição

Implementação do tipo abstrado de dado fila sequencial em c++. A implementação já acompanha um caso de teste no arquivo main, que demonstra o uso da fila.

---

## Estrutura dos arquivos

- **src**: Contém os arquivos de implementação.
- **include**: Contém o arquivo de cabeçalho da fila.
- **Makefile**: Arquivo de configuração para a compilação do programa.

---

## Como Compilar e Executar

### Compilando o Código

```bash
make
```

### Executando o Programa

```bash
./build/iniciar
```

### Ou use a compilação direta com o comando:

```bash
g++ src/*.cpp -Iinclude -o iniciar

iniciar
```

---

## Funcionalidades

O programa permite realizar as seguintes operações na fila sequencial:

- Criar uma fila vazia;
- Testar se a fila está vazia;
- Verificar se a fila está cheia;
- Obter o tamanho da fila;
- Consultar o elemento da frente da fila;
- Inserir um novo elemento no fundo da fila;
- Remover o elemento da frente da fila;
- Exibir os elementos da fila.

---

## Saída do Programa

Funcionamento da fila:

```
Fila criada
Vazia? Sim
Valor 2 adicionado.
Fila: 2
Vazia? Nao
Valor 42 adicionado.
Fila: 2 42
Valor 7 adicionado.
Fila: 2 42 7
Valor 6 adicionado.
Fila: 2 42 7 6
Valor 5 adicionado.
Fila: 2 42 7 6 5
Cheia? Sim
Valor 2 removido.
Fila: 42 7 6 5
Valor 8 adicionado.
Fila: 42 7 6 5 8
Valor 42 removido.
Fila: 7 6 5 8
Valor 72 adicionado.
Fila: 7 6 5 8 72
Valor 7 removido.
Fila: 6 5 8 72
Valor 99 adicionado.
Fila: 6 5 8 72 99
Elemento do top: 6

```
