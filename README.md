# Estrutra de Dados

###### Playlist do Prof. Douglas Maioli [![Youtube](https://www.youtube.com/s/desktop/b4620429/img/favicon.ico)](https://www.youtube.com/playlist?list=PLrOyM49ctTx_AMgNGQaic10qQJpTpXfn_)

Nessa disciplina será usada a linguagem C++, porque deixa a cargo do programador as operações para gerenciamento das estruturas de dados, tem tipagem estática, e permite a manipulação explícita da memória.

<details><summary><b>Introdução C++</b></summary>

- Aula [1](./_introducao-cpp/primeiro.cpp) - Hello World
- Aula [2](./_introducao-cpp/segundo.cpp) - Variáveis e Entradas
- Aula [4](./_introducao-cpp/quarto.cpp) - Funções
- Desafio [1](./_introducao-cpp/exer1.cpp) - Função matemática
- Desafio [2](./_introducao-cpp/exer2.cpp) - Média aluno
- Desafio [3](./_introducao-cpp/exer3.cpp) - Fatorial
- Desafio [4](./_introducao-cpp/exer4.cpp) - Várias potências
- Desafio [5](./_introducao-cpp/exer5.cpp) - Moradia Popular
- Aula [7](./_introducao-cpp/setimo.cpp) - Ponteiros
- Aula [8](./_introducao-cpp/oitavo.cpp) - Vetores
- Aula [9](./_introducao-cpp/nono.cpp) - Matriz
- Desafio [6](./_introducao-cpp/exer6.cpp) - Gasto familiar
- Desafio [7](./_introducao-cpp/exer7.cpp) - Soma de matrizes
- Desafio [8](./_introducao-cpp/exer8.cpp) - Vetores dinâmicos
- Desafio [9](./_introducao-cpp/exer9.cpp) - Idade com ponteiro
- Desafio [10](./_introducao-cpp/exer10.cpp) - Trocando ponteiros
- Aula de Classes:
  - Exemplo [1](./_introducao-cpp/classe1.cpp)
  - Exemplo [2](./_introducao-cpp/classe2.cpp)
  - Exemplo [3](./_introducao-cpp/classe3.cpp)
- Classes em arquivos [separados](./_introducao-cpp/carro/)
> Pra compilar algoritmos em arquivos separados: `g++ main_filename.cpp filename.cpp etc.cpp -o filename.exe` depois pra rodar o algortimo pelo terminal vá no dir do .exe: `./filename.exe`
- Desafio [11](./_introducao-cpp/exer11.cpp) - Classe Cidades

</details>

- Para complementar os conhecimentos, assista essas aulas do **Fabio [Akita](https://github.com/akitaonrails)**:
  - Hello World Como Você Nunca Viu! [![Youtube](https://www.youtube.com/s/desktop/b4620429/img/favicon.ico)](https://youtu.be/Gp2m8ZuXoPg)
  - O que vem DEPOIS do Hello World? [![Youtube](https://www.youtube.com/s/desktop/b4620429/img/favicon.ico)](https://youtu.be/YyWMN_0g3BQ)
  - Árvores: O Começo de TUDO [![Youtube](https://www.youtube.com/s/desktop/b4620429/img/favicon.ico)](https://youtu.be/9GdesxWtOgs)

- **Pilha**: 
  - LIFO (last in, first out), o último à entrar é o pirmeiro à sair. Ou FILO (first in, last out). Exemplo: uma pilha de pratos.
  - Pra quê isso serve na internet? Pense numa navegação entre sites, o último acessado fica no topo do histórico, quando você clica em "voltar" ele te redireciona pro último site acessado. Ele faz um empilhamento.
  - Implementação da [Pilha](./pilha/) utilizando Vetores.
- **Fila**:
  - FIFO (first in first out), primeiro a chegar é o primeiro a sair. Ou LILO (last in last out). O funcionamento e utilidade já é intrínseca na nossa cultura.
  - Implementação da [Fila](./fila/fila.exe) utilizando Vetores.
- **Lista encadeada [vs](./pilha-encadeada/lista-encadeada.pdf) Lista sequencial**
  - Implementação de [Pilha](./pilha-encadeada/) com Lista encadeada
  - Implementação de [Fila](./fila-encadeada/) com Lista encadeada
- **Tabela [Hash](./tabela-hash/tabela_hash.pdf)**
  - Implementação da Tabela [Hash](./tabela-hash/)
- **Tabela Hash com [colisão](./tabela-hash-colisao/tabela_hash_colisao.pdf)**
  - Implementação da Tabela Hash com [colisão](./tabela-hash-colisao/)
- **Árvore [Binária](./arvore-binaria/arvore_binaria.pdf)**
  - [Implementação](./arvore-binaria/) da Árvore Binária
- **Árvore [AVL](./arvore-avl/arvore_avl.pdf)**
  - [Implementação](./arvore-avl/) da Árvore AVL
- **[Grafos](./grafos/grafos.pdf): Listas de Adjacências e Matriz de Adjacências**
  - [Implementação](./grafos/matriz-adjacencias) da Matriz de Adjacências de Grafos
- **Grafos: [Buscas](./grafos/buscas/buscas.pdf) em Largura e em Profundidade**
  - [Implementação](./grafos/buscas/) das Buscas
