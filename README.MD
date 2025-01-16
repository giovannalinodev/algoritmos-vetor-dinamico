# 📦 Projeto de Vetor Dinâmico em C++

Este projeto consiste na implementação de duas estruturas de dados em C++ para manipulação de um vetor dinâmico de números inteiros, com foco em gerenciamento de memória e análise de desempenho. As estruturas implementadas são:

- **`array_list`**: Implementação usando alocação dinâmica de array.
- **`linked_list`**: Implementação usando lista duplamente encadeada.

---

## 📌 Objetivo do Projeto
O objetivo deste projeto é implementar e testar duas estruturas de vetor dinâmico (`array_list` e `linked_list`) com foco em:

- Inserção de elementos no início (`push_front`) e no final (`push_back`).
- Remoção de elementos pelo índice (`remove_at`).
- Comparação de desempenho e uso de memória entre as implementações.
- Testar a corretude dos métodos e o tempo de execução de diferentes operações.

---

## 📁 Estrutura do Projeto
O projeto está organizado com a seguinte estrutura de diretórios e arquivos:

```
PROJETO-VETOR-DINAMICO
├── cpp
│   ├── tests
│   │   ├── push
│   │   │   ├── e1.txt
│   │   │   ├── e2.txt
│   │   └── remove_at
│   │       ├── e1.txt
│   │       └── e2.txt
│   ├── array_list.hpp
│   ├── linked_list.hpp
│   ├── gera_num.cpp
│   ├── test-pushfront-array-list-01.cpp
│   ├── test-pushfront-linked-list-01.cpp
│   ├── test-removeat-array-list-01.cpp
│   ├── test-removeat-linked-list-01.cpp
│   └── README.md
```

## ⚙️ Compilação dos Arquivos
# Compilar o gerador de números aleatórios
g++ -Wall -o gera_num gera_num.cpp

# Compilar os testes para array_list
g++ -Wall -o test-pushfront-array-list-01 test-pushfront-array-list-01.cpp
g++ -Wall -o test-removeat-array-list-01 test-removeat-array-list-01.cpp

# Compilar os testes para linked_list
g++ -Wall -o test-pushfront-linked-list-01 test-pushfront-linked-list-01.cpp
g++ -Wall -o test-removeat-linked-list-01 test-removeat-linked-list-01.cpp

## ▶️ Execução dos Testes
Testes de Inserção (push_front)

```
./test-pushfront-array-list-01 < tests/push/e1.txt
./test-pushfront-linked-list-01 < tests/push/e1.txt
```
Testes de Remoção pelo Índice (remove_at)
```
./test-removeat-array-list-01 < tests/remove_at/e1.txt
./test-removeat-linked-list-01 < tests/remove_at/e1.txt
```

## 📊 Como Gerar Arquivos de Teste Aleatórios
Para gerar arquivos de teste aleatórios usando o programa gera_num:
```
# Gerar arquivo com 10 números aleatórios
./gera_num 10 > tests/push/novo_teste_push.txt
./gera_num 10 > tests/remove_at/novo_teste_remove.txt
```
Formato esperado dos arquivos .txt gerados:
```
5
10
20
30
40
50
```
## 🛠️ Exemplo de Saída Esperada (Push Front Test)
```
[INFO] Elapsed time for 5 pushes front :1109
```
## 🛠️ 📈 Análise de Desempenho e Eficiência

### Resultados dos Testes - Pop Back ([pop-back.txt](desempenho/+100/pop-back.txt))

| Arquivo de Teste | Elementos Removidos | Tempo Decorrido (ms) |
|-------------------|---------------------|-----------------------|
| e1.txt           | 998                 | 0                     |
| e2.txt           | 1998                | 0                     |
| e3.txt           | 4998                | 0                     |
| e4.txt           | 9998                | 0                     |
| e5.txt           | 49998               | 2001                  |
| e6.txt           | 99998               | 3615                  |
| e7.txt           | 199998              | 6695                  |


