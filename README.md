# Estrutra de Dados

###### Playlist do Prof. Douglas Maioli [►](https://www.youtube.com/channel/UC_Ed5ksOnDgmpUdK81z81gw)

Nessa disciplina será usada a linguagem C++, porque deixa a cargo do programador as operações para gerenciamento das estruturas de dados, tem tipagem estática, e permite a manipulação explícita da memória.

<details><summary>Introdução C++</summary>

- Aula [1](./aulas/primeiro.cpp) - Hello World
- Aula [2](./aulas/segundo.cpp) - Variáveis e Entradas
- Aula [4](./aulas/quarto.cpp) - Funções
- Desafio [1](./exercs/exer1.cpp) - Função matemática
- Desafio [2](./exercs/exer2.cpp) - Média aluno
- Desafio [3](./exercs/exer3.cpp) - Fatorial
- Desafio [4](./exercs/exer4.cpp) - Várias potências
- Desafio [5](./exercs/exer5.cpp) - Moradia Popular
- Aula [7](./aulas/setimo.cpp) - Ponteiros
- Aula [8](./aulas/oitavo.cpp) - Vetores
- Aula [9](./aulas/nono.cpp) - Matriz
- Desafio [6](./exercs/exer6.cpp) - Gasto familiar
- Desafio [7](./exercs/exer7.cpp) - Soma de matrizes
- Desafio [8](./exercs/exer8.cpp) - Vetores dinâmicos
- Desafio [9](./exercs/exer9.cpp) - Idade com ponteiro
- Desafio [10](./exercs/exer10.cpp) - Trocando ponteiros
- Aula de Classes:
  - Exemplo [1](./aulas/classe1.cpp)
  - Exemplo [2](./aulas/classe2.cpp)
  - Exemplo [3](./aulas/classe3.cpp)
- Classes em arquivos [separados](./aulas/carro/)
> Pra compilar algoritmos em arquivos separados: `g++ main_filename.cpp filename.cpp -o filename.exe` depois pra rodar o algortimo pelo terminal vá no dir do .exe: `./filename.exe`
- Desafio [11](./exercs/exer11.cpp) - Classe Cidades

</details><br>


- Pilha: 
  - LIFO (last in, first out), o último à entrar é o pirmeiro à sair. Ou FILO (first in, last out). Exemplo: uma pilha de pratos.
  - Pra quê isso serve na internet? Pense numa navegação entre sites, o último acessado fica no topo do histórico, quando você clica em "voltar" ele te redireciona pro último site acessado. Ele faz um empilhamento.
  - Implementação da [Pilha](./pilha/) utilizando Vetores.
- Fila:
  - FIFO (first in first out), primeiro a chegar é o primeiro a sair. Ou LILO (last in last out). O funcionamento e utilidade já é intrínseca na nossa cultura.
  - Implementação da [Fila](./fila/) utilizando Vetores.
- Lista sequencial [vs](./lista-encadeada.pdf) Lista encadeada
  - Implementação de [Pilha](./pilha-encadeada/) com Lista encadeada
