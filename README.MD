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
├── analise-desempenho
├── cpp
│   ├── tests
│   │   ├── pop
│   │   ├── push
│   │   └── remove_at
│   ├── array_list.hpp
│   ├── linked_list.hpp
│   ├── gera_num.cpp
│   ├── test-popback-array-list.cpp
│   ├── test-popback-linked-list.cpp
│   ├── test-popfront-array-list.cpp
│   ├── test-popfront-linked-list.cpp
│   ├── test-pushback-array-list.cpp
│   ├── test-pushback-linked-list.cpp
│   ├── test-pushfront-array-list.cpp
│   ├── test-pushfront-linked-list.cpp
│   ├── test-pushfront-array-list-01.cpp
│   ├── test-pushfront-linked-list-01.cpp
│   ├── test-removeat-array-list-01.cpp
│   ├── test-removeat-linked-list-01.cpp
│   ├── README.txt
├── .gitignore
└── README.md

```

## ⚙️ Compilação dos Arquivos
# Compilar o gerador de números aleatórios
g++ -Wall -o gera_num gera_num.cpp

# Compilar os testes para array_list
```
g++ -Wall -o test-popback-array-list test-popback-array-list.cpp
g++ -Wall -o test-popfront-array-list test-popfront-array-list.cpp
g++ -Wall -o test-pushback-array-list test-pushback-array-list.cpp
g++ -Wall -o test-pushfront-array-list test-pushfront-array-list.cpp
g++ -Wall -o test-pushfront-array-list-01 test-pushfront-array-list-01.cpp
g++ -Wall -o test-removeat-array-list-01 test-removeat-array-list-01.cpp
```

# Compilar os testes para linked_list
```
g++ -Wall -o test-popback-linked-list test-popback-linked-list.cpp
g++ -Wall -o test-popfront-linked-list test-popfront-linked-list.cpp
g++ -Wall -o test-pushback-linked-list test-pushback-linked-list.cpp
g++ -Wall -o test-pushfront-linked-list test-pushfront-linked-list.cpp
g++ -Wall -o test-pushfront-linked-list-01 test-pushfront-linked-list-01.cpp
g++ -Wall -o test-removeat-linked-list-01 test-removeat-linked-list-01.cpp

```

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
### • Capacidade 100
### Resultados dos Testes - Pop Back ([pop-back.txt](analise-desempenho/+100/pop-back.txt))

| Arquivo de Teste | Elementos Removidos | Tempo Decorrido (ms) |
|-------------------|---------------------|-----------------------|
| e1.txt           | 998                 | 0                     |
| e2.txt           | 1998                | 0                     |
| e3.txt           | 4998                | 0                     |
| e4.txt           | 9998                | 0                     |
| e5.txt           | 49998               | 2001                  |
| e6.txt           | 99998               | 3615                  |
| e7.txt           | 199998              | 6695                  |

### Resultados dos Testes - Pop Front ([pop-front.txt](analise-desempenho/+100/pop-front.txt))

| Arquivo de Teste | Elementos Removidos | Tempo Decorrido (ms)     |
|-------------------|---------------------|--------------------------|
| e1.txt           | 998                 | 1038                     |
| e2.txt           | 1998                | 5228                     |
| e3.txt           | 4998                | 33183                    |
| e4.txt           | 9998                | 126352                   |
| e5.txt           | 49998               | 2932542                  |
| e6.txt           | 99998               | 10957262                 |
| e7.txt           | 199998              | 43403459                 |

### Resultados dos Testes - Push Back ([push-back.txt](analise-desempenho/+100/push-back.txt))

| Arquivo de Teste | Elementos Inseridos | Tempo Decorrido (ms)     |
|-------------------|---------------------|--------------------------|
| e1.txt           | 5                   | 0                        |
| e2.txt           | 10                  | 0                        |
| e3.txt           | 1000                | 999                      |
| e4.txt           | 2000                | 999                      |
| e5.txt           | 3000                | 2003                     |
| e6.txt           | 5000                | 3620                     |
| e7.txt           | 10000               | 12034                    |
| e8.txt           | 25000               | 28504                    |
| e9.txt           | 50000               | 69899                    |
| e10.txt          | 100000              | 198945                   |
| e11.txt          | 200000              | 737542                   |

### Resultados dos Testes - Push Front ([push-front.txt](analise-desempenho/+100/push-front.txt))

| Arquivo de Teste | Elementos Inseridos | Tempo Decorrido (ms)     |
|-------------------|---------------------|--------------------------|
| e1.txt           | 5                   | 0                        |
| e2.txt           | 10                  | 0                        |
| e3.txt           | 1000                | 2258                     |
| e4.txt           | 2000                | 6432                     |
| e5.txt           | 3000                | 11644                    |
| e6.txt           | 5000                | 33785                    |
| e7.txt           | 10000               | 128090                   |
| e8.txt           | 25000               | 734096                   |
| e9.txt           | 50000               | 2834083                  |
| e10.txt          | 100000              | 11137059                 |
| e11.txt          | 200000              | 45254425                 |

### Resultados dos Testes - Remove At ([remove-at.txt](analise-desempenho/+100/remove-at.txt))

| Arquivo de Teste | Tentativas de Remoção | Remoções Bem-Sucedidas | Falhas na Remoção | Tempo Decorrido (ms) |
|-------------------|-----------------------|-------------------------|-------------------|----------------------|
| e1.txt           | 10                    | 10                      | 0                 | 0                    |
| e2.txt           | 10                    | 8                       | 2                 | 0                    |

### • Capacidade 1000

### Resultados dos Testes - Pop Back ([pop-back.txt](analise-desempenho/+1000/pop-back.txt))

| Arquivo de Teste | Elementos Removidos | Tempo Decorrido (ms)     |
|-------------------|---------------------|--------------------------|
| e1.txt           | 998                 | 1082                     |
| e2.txt           | 1998                | 0                        |
| e3.txt           | 4998                | 1007                     |
| e4.txt           | 9998                | 994                      |
| e5.txt           | 49998               | 3008                     |
| e6.txt           | 99998               | 2549                     |
| e7.txt           | 199998              | 6516                     |

### Resultados dos Testes - Pop Front ([pop-front.txt](analise-desempenho/+1000/pop-front.txt))

| Arquivo de Teste | Elementos Removidos | Tempo Decorrido (ms)     |
|-------------------|---------------------|--------------------------|
| e1.txt           | 998                 | 1047                     |
| e2.txt           | 1998                | 4999                     |
| e3.txt           | 4998                | 31531                    |
| e4.txt           | 9998                | 171132                   |
| e5.txt           | 49998               | 2683310                  |
| e6.txt           | 99998               | 10701479                 |
| e7.txt           | 199998              | 42848301                 |

### Resultados dos Testes - Push Back ([push-back.txt](analise-desempenho/+1000/push-back.txt))

| Arquivo de Teste | Elementos Inseridos | Tempo Decorrido (ms)     |
|-------------------|---------------------|--------------------------|
| e1.txt           | 5                   | 0                        |
| e2.txt           | 10                  | 0                        |
| e3.txt           | 1000                | 996                      |
| e4.txt           | 2000                | 1005                     |
| e5.txt           | 3000                | 3505                     |
| e6.txt           | 5000                | 3519                     |
| e7.txt           | 10000               | 9397                     |
| e8.txt           | 25000               | 22400                    |
| e9.txt           | 50000               | 45360                    |
| e10.txt          | 100000              | 232786                   |


### Resultados dos Testes - Push Front ([push-front.txt](analise-desempenho/+1000/push-front.txt))

| Arquivo de Teste | Elementos Inseridos | Tempo Decorrido (ms)     |
|-------------------|---------------------|--------------------------|
| e1.txt           | 5                   | 0                        |
| e2.txt           | 10                  | 0                        |
| e3.txt           | 1000                | 1255                     |
| e4.txt           | 2000                | 9768                     |
| e5.txt           | 3000                | 12797                    |
| e6.txt           | 5000                | 35608                    |
| e7.txt           | 10000               | 121332                   |
| e8.txt           | 25000               | 731830                   |
| e9.txt           | 50000               | 2840392                  |
| e10.txt          | 100000              | 11162276                 |


### Resultados dos Testes - Remove At ([remove-at.txt](analise-desempenho/+1000/remove-at.txt))

| Arquivo de Teste | Tentativas de Remoção | Remoções Bem-Sucedidas | Falhas na Remoção | Tempo Decorrido (ms) |
|-------------------|-----------------------|-------------------------|-------------------|----------------------|
| e1.txt           | 10                    | 10                      | 0                 | 0                    |
| e2.txt           | 10                    | 8                       | 2                 | 0                    |

### • Duplicados

### Resultados dos Testes - Pop Back ([pop-back.txt](analise-desempenho/array-dobro/pop-back.txt))

| Arquivo de Teste | Tentativas de Remoção | Remoções Bem-Sucedidas | Falhas na Remoção | Tempo Decorrido (ms) |
|-------------------|-----------------------|-------------------------|-------------------|----------------------|
| e1.txt           | 998                   | 998                     | 0                 | 0                    |
| e2.txt           | 1998                  | 1998                    | 0                 | 0                    |
| e3.txt           | 4998                  | 4998                    | 0                 | 0                    |
| e4.txt           | 9998                  | 9998                    | 0                 | 0                    |
| e5.txt           | 49998                 | 49998                   | 0                 | 1992000              |
| e6.txt           | 99998                 | 99998                   | 0                 | 2996000              |
| e7.txt           | 199998                | 199998                  | 0                 | 5685000              |

### Resultados dos Testes - Pop Front ([pop-front.txt](analise-desempenho/array-dobro/pop-front.txt))

| Arquivo de Teste | Remoções Bem-Sucedidas | Tempo Decorrido (ms) |
|-------------------|------------------------|-----------------------|
| e1.txt           | 998                    | 0                     |
| e2.txt           | 1998                   | 0                     |
| e3.txt           | 4998                   | 0                     |
| e4.txt           | 9998                   | 0                     |
| e5.txt           | 49998                  | 1992000               |
| e6.txt           | 99998                  | 2996000               |
| e7.txt           | 199998                 | 5685000               |

### Resultados dos Testes - Push Back ([push-back.txt](analise-desempenho/array-dobro/push-back.txt))

| Arquivo de Teste | Número de Pushes | Tempo Decorrido (ms) |
|-------------------|------------------|-----------------------|
| e1.txt           | 5                | 0                     |
| e2.txt           | 10               | 0                     |
| e3.txt           | 1000             | 998000                |
| e4.txt           | 2000             | 1999000               |
| e5.txt           | 3000             | 2106000               |
| e6.txt           | 5000             | 2999000               |
| e7.txt           | 10000            | 9169000               |
| e8.txt           | 25000            | 22856000              |
| e9.txt           | 50000            | 43338000              |
| e10.txt          | 100000           | 91996000              |

### Resultados dos Testes - Push Front ([push-front.txt](analise-desempenho/array-dobro/push-front.txt))

| Arquivo de Teste | Número de Pushes | Tempo Decorrido (ms) |
|-------------------|------------------|-----------------------|
| e1.txt           | 5                | 0                     |
| e2.txt           | 10               | 0                     |
| e3.txt           | 1000             | 0                     |
| e4.txt           | 2000             | 4594000               |
| e5.txt           | 3000             | 13830000              |
| e6.txt           | 5000             | 33553000              |
| e7.txt           | 10000            | 125926000             |
| e8.txt           | 25000            | 732510000             |
| e9.txt           | 50000            | 2828673000            |
| e10.txt          | 100000           | 11232619000           |

### Resultados dos Testes - Remove At ([remove-at.txt](analise-desempenho/array-dobro/remove-at.txt))

| Arquivo de Teste | Tentativas de Remoção | Remoções Bem-Sucedidas | Falhas na Remoção | Tempo Decorrido (ms) |
|-------------------|-----------------------|-------------------------|-------------------|----------------------|
| e1.txt           | 10                    | 10                      | 0                 | 0                    |
| e2.txt           | 10                    | 8                       | 2                 | 0                    |

### • Lista Ligada 

### Resultados dos Testes - Pop Back ([pop-back.txt](analise-desempenho/listaligada/pop-back.txt))
| Arquivo de Teste | Número de Pops Back | Tempo Decorrido (ms) |
|-------------------|---------------------|-----------------------|
| e1.txt           | 1000                | 0                     |
| e2.txt           | 2000                | 0                     |
| e3.txt           | 5000                | 0                     |
| e4.txt           | 10000               | 0                     |
| e5.txt           | 50000               | 1000000               |
| e6.txt           | 100000              | 1916000               |
| e7.txt           | 200000              | 7019000               |

### Resultados dos Testes - Pop Front ([pop-front.txt](analise-desempenho/listaligada/pop-front.txt))

| Arquivo de Teste | Número de Remoções Bem-Sucedidas | Tempo Decorrido (ms) |
|-------------------|----------------------------------|-----------------------|
| e1.txt           | 4199134                         | 146832000             |
| e2.txt           | 4199134                         | 127698000             |
| e3.txt           | 4199134                         | 133373000             |
| e4.txt           | 4199134                         | 132625000             |
| e5.txt           | 4199134                         | 132812000             |
| e6.txt           | 4199134                         | 143522000             |
| e7.txt           | 4199134                         | 136206000             |

### Resultados dos Testes - Push Back ([push-back.txt](analise-desempenho/listaligada/push-back.txt))

| Arquivo de Teste | Número de Pushes | Tempo Decorrido (ms) |
|-------------------|------------------|-----------------------|
| e1.txt           | 5                | 0                     |
| e2.txt           | 10               | 0                     |
| e3.txt           | 1000             | 1010000               |
| e4.txt           | 2000             | 4014000               |
| e5.txt           | 3000             | 3400000               |
| e6.txt           | 5000             | 4515000               |
| e7.txt           | 10000            | 9110000               |
| e8.txt           | 25000            | 21627000              |
| e9.txt           | 50000            | 48026000              |
| e10.txt          | 100000           | 89630000              |

### Resultados dos Testes - Push Front ([push-front.txt](analise-desempenho/listaligada/push-front.txt))

| Arquivo de Teste | Número de Pushes | Tempo Decorrido (ms) |
|-------------------|------------------|-----------------------|
| e1.txt           | 5                | 0                     |
| e2.txt           | 10               | 0                     |
| e3.txt           | 1000             | 1010000               |
| e4.txt           | 2000             | 2015000               |
| e5.txt           | 3000             | 2023000               |
| e6.txt           | 5000             | 5690000               |
| e7.txt           | 10000            | 10358000              |
| e8.txt           | 25000            | 24430000              |
| e9.txt           | 50000            | 46404000              |
| e10.txt          | 100000           | 99479000              |

### Resultados dos Testes - Remove At ([remove-at.txt](analise-desempenho/listaligada/remove-at.txt))

| Arquivo de Teste | Tentativas de Remoção | Remoções Bem-Sucedidas | Falhas na Remoção | Tempo Decorrido (ms) |
|-------------------|-----------------------|-------------------------|-------------------|----------------------|
| e1.txt           | 10                    | 10                      | 0                 | 0                    |
| e2.txt           | 10                    | 8                       | 2                 | 0                    |

### Conclusão

Este projeto implementou com sucesso duas estruturas de dados dinâmicas em C++ conforme solicitado: **`array_list`**, baseada em alocação dinâmica de arrays, e **`linked_list`**, construída sobre listas duplamente encadeadas. Seguindo as instruções especificadas, foram obtidos:

#### Desenvolvimento das Classes:
- As classes **`array_list`** e **`linked_list`** foram implementadas com todos os métodos obrigatórios necessários.
- Comentários detalhando o funcionamento dos métodos, utilizando a notação **Big-O** foram adicionados.

#### Testes de Corretude e Desempenho:
- Foram elaborados casos de teste consistentes para verificar a funcionalidade das operações principais:
  - Inserções consecutivas no início (`push_front`) e no final (`push_back`).
  - Remoções pelo índice (`remove_at`), no início (`pop_front`) e no final (`pop_back`).
- Arquivos de teste foram gerados e organizados, como evidenciado na estrutura do projeto.

Com isso, o projeto cumpre os requisitos estabelecidos, demonstrando a aplicação de conceitos de programação e da manipulação de um vetor dinâmico em C++, com foco em desempenho e gerenciamento eficiente de memória.
