## A) Batalha de gladiadores 
A Sony, a principal empresa de videogames do mundo, está recrutando desenvolvedores de jogos para 
integrar seu seleto time de desenvolvimento. Para selecionar os melhores talentos, eles propuseram um 
desafio de programação, no qual os participantes têm a oportunidade de começar suas carreiras no 
emocionante mundo dos games.
O desafio consiste em desenvolver um sistema de batalha entre gladiadores, que opera da seguinte 
maneira:

1. O jogador deve cadastrar 5 gladiadores, fornecendo os seguintes atributos para cada um: Nome 
(String), Força (int), Habilidade (int) e Idade(int). Tanto a força quanto a habilidade variam de 0 a 
10.

2. Após cadastrar os 5 gladiadores, o jogador pode escolher quais gladiadores irão se enfrentar.

3. As batalhas ocorrem da seguinte forma:

a. Cada gladiador inicia com 100 pontos de vida.

b. O primeiro gladiador selecionado ataca primeiro.

c. O dano causado durante um ataque é calculado como "DANO = força + (2^habilidade)".

d. Após o ataque do primeiro gladiador, é a vez do próximo gladiador, e assim por diante, 
até que um dos dois seja derrotado (quando sua vida atinge 0).

4. Para sair do jogo, o jogador deve digitar '-1'.

5. Ao final do código, forneça comentários indicando a complexidade assintótica do seu código e a 
complexidade, no modelo RAM, das funções do seu código (Coloque como comentários no 
próprio código).

Dicas:

1. Utilize uma struct para armazenar os gladiadores.
2. Separe a solução do exercício em funções para facilitar a resolução e deixar seu código mais 
organizado. Por exemplo:

bool combate(gladiador g1, gladiador g2){
    //Código que retornará 0 caso g1 ganhe ou 1 caso g2 ganhe
}

Exemplo de Entrada: 
Marcelo
10
10
21

Goku
8
7
38

Gon
5
4
12

Gojo
7
8
28

Luffy
6
7
17

0 1
3 4

Exemplo de saida:
Marcelo ganhou a batalha contra Goku.
Gojo ganhou a batalha contra Luffy.
