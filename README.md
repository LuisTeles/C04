
## [C04] Exercícios de Revisão

### A) Batalha de gladiadores

A Sony, a principal empresa de videogames do mundo, está recrutando desenvolvedores de jogos para integrar seu seleto time de desenvolvimento. Para selecionar os melhores talentos, eles propuseram um desafio de programação, no qual os participantes têm a oportunidade de começar suas carreiras no emocionante mundo dos games.

O desafio consiste em desenvolver um sistema de batalha entre gladiadores, que opera da seguinte maneira:

1. O jogador deve cadastrar 5 gladiadores, fornecendo os seguintes atributos para cada um: Nome (String), Força (int), Habilidade (int) e Idade (int). Tanto a força quanto a habilidade variam de 0 a 10.
2. Após cadastrar os 5 gladiadores, o jogador pode escolher quais gladiadores irão se enfrentar.
3. As batalhas ocorrem da seguinte forma:
    - Cada gladiador inicia com 100 pontos de vida.
    - O primeiro gladiador selecionado ataca primeiro.
    - O dano causado durante um ataque é calculado como `DANO = força + (2^habilidade)`.
    - Após o ataque do primeiro gladiador, é a vez do próximo gladiador, e assim por diante, até que um dos dois seja derrotado (quando sua vida atinge 0).
4. Para sair do jogo, o jogador deve digitar "-1".
5. Ao final do código, forneça comentários indicando a complexidade assintótica do seu código e a complexidade, no modelo RAM, das funções do seu código (Coloque como comentários no próprio código).

**Dicas:**
- Utilize uma struct para armazenar os gladiadores.
- Separe a solução do exercício em funções para facilitar a resolução e deixar seu código mais organizado. Por exemplo:
  ```cpp
  bool combate(gladiador g1, gladiador g2){
      // Código que retornará 0 caso g1 ganhe ou 1 caso g2 ganhe
  }
  ```

**Exemplo de Entrada e Saída:**

| Entrada                                                                                                                     | Saída                                                                        |
| --------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------- |
| Marcelo<br>10<br>Goku<br>8<br>7<br>38<br>Gon<br>5<br>4<br>12<br>Gojo<br>7<br>8<br>28<br>Luffy<br>6<br>7<br>17<br>0 1<br>3 4 | Marcelo ganhou a batalha contra Goku.<br>Gojo ganhou a batalha contra Luffy. |

---

### B) Colecionador de insetos

Anderson finalmente conseguiu um espaço em seu apartamento para expor sua coleção de insetos, e gostaria de fazê-lo de forma organizada. Cada inseto está guardado dentro de uma caixa de vidro, e rotulado com o nome científico da espécie e o tamanho em centímetros de cada um. Para otimizar seu tempo, Anderson pediu a você para que faça um programa que, dados a quantidade de insetos que ele possui e a informação de cada rótulo, ordene seus insetos por tamanho, e retorne apenas o nome da espécie na ordem desejada.

**Exemplo de Entrada e Saída:**

| Entrada                                                                                                                                                                                                                                                                                                                                                                      | Saída                                                                                                                                                 |
| ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------- |
| Bombus terrestris<br>2<br>Anoplophora glabripennis<br>Apis mellifera<br>Danaus plexippus<br>1.5<br>Mantis religiosa<br>7.5<br>Danaus plexippus<br>3.5<br>Anoplophora glabripennis<br>3                                                                                                                                                                                       | Bombus terrestris<br>Anoplophora glabripennis<br>Apis mellifera<br>Danaus plexippus<br>Mantis religiosa                                               |
| 8<br>Tenebrio molitor<br>Pieris brassicae<br>Forficula auricularia<br>2.2<br>Pieris brassicae<br>Lucanus cervus<br>Zophobas morio<br>7<br>Nymphalis antiopa<br>Papilio machaon<br>3.2<br>Periplaneta americana<br>Tenebrio molitor<br>Lucanus cervus<br>1.5<br>Forficula auricularia<br>1.5<br>Nymphalis antiopa<br>3<br>Zophobas morio<br>2.5<br>Periplaneta americana<br>4 | Pieris brassicae<br>Forficula auricularia<br>Nymphalis antiopa<br>Zophobas morio<br>Periplaneta americana<br>Tenebrio molitor<br>Lucanus cervus       |
| 7<br>Coccinella septempunctata<br>Coccinella septempunctata<br>Aglais io<br>0.8<br>Gryllus campestris<br>Acherontia atropos<br>Vanessa atalanta<br>5<br>Melolontha melolontha<br>Oryctes nasicornis<br>Oryctes nasicornis<br>4<br>Acherontia atropos<br>Vanessa atalanta<br>2.8<br>Gryllus campestris<br>2.5<br>Aglais io<br>2.3<br>Melolontha melolontha<br>3               | Coccinella septempunctata<br>Gryllus campestris<br>Acherontia atropos<br>Vanessa atalanta<br>Aglais io<br>Melolontha melolontha<br>Oryctes nasicornis |

---

### C) Pastelaria do Dudu (Sequencial)

Eduardo estava cuidando do estoque da pastelaria da família e teve a ideia de chamar um aluno do Inatel para ajudar a registrar os itens para verificar com mais facilidade se possui ou não determinado produto. Ajude Eduardo a criar um sistema que armazene nome e quantidade de cada produto em um vetor, e imprima uma mensagem informando se existe ou não em estoque.

**Exemplo de Entrada e Saída:**

| Entrada                                            | Saída                         |
| -------------------------------------------------- | ----------------------------- |
| 4<br>Farinha 2<br>Ovo 12<br>Oleo 1<br>Sal 1<br>Ovo | Ovo em estoque!               |
| 3<br>Frango 5<br>Calabresa 4<br>Queijo 9<br>Banana | Nao existe Banana em estoque! |

---

### D) Pastelaria do Dudu (Binária)

Eduardo, após refletir muito, achou que poderia melhorar o sistema do estoque adicionando um código em ordem crescente em cada produto cadastrado, dessa forma, você pode usar um algoritmo de Busca Binária para facilitar a busca quando o estoque estiver cheio. Ajude Eduardo a criar esse novo sistema que armazene o código do produto, nome e quantidade em um vetor, e imprima uma mensagem informando se existe ou não.

**Exemplo de Entrada e Saída:**

| Entrada                                                  | Saída                                            |
| -------------------------------------------------------- | ------------------------------------------------ |
| 4<br>1 Farinha 2<br>2 Ovo 12<br>3 Oleo 1<br>4 Sal 1<br>2 | Ovo em estoque!                                  |
| 3<br>1 Frango 5<br>2 Calabresa 4<br>3 Queijo 9<br>7      | Nao existem produtos com esse codigo em estoque! |

---

### E) Pilha e Hashing

Considere a inserção de elementos em uma pilha e quando um elemento for removido ele deve ser inserido em uma tabela hash de comprimento M usando endereçamento aberto. Mostre o resultado da inserção dessas chaves utilizando hash duplo com h1(k) = k mod m e h2(k) = 1 + (k mod (m − 1)).

A entrada consiste em três linhas onde a primeira é o valor de M, a segunda é a quantidade de elementos que serão inseridos e a terceira são os elementos que devem ser armazenados.

A saída deve mostrar os elementos depois de serem inseridos na tabela hash. Nas posições que não forem armazenado nenhum elemento deve mostrar -1.

**Exemplo de Entrada e Saída:**

| Entrada                              | Saída                           |
| ------------------------------------ | ------------------------------- |
| 11<br>9<br>10 22 31 4 15 28 17 88 59 | 88 10 28 22 -1 17 -1 31 4 15 -1 |
| 7<br>4<br>12 23 6 43                 | 43 23 -1 -1 12 6 -1             |

---

### F) Loja de Itens

Poles está organizando os itens disponíveis para venda em sua loja online. Ele quer criar um sistema de compra e venda de itens.

Para isso ele tem uma lista com diversos itens e suas informações (código, nome e preço). Ele precisa cadastrar essa lista em uma tabela hash de tamanho M = 43 para facilitar as buscas. A função hash usada para a inserção deve ser pelo método do módulo, considerando o código do item e o valor M, com tratamento de colisão por sondagem linear.

Em seguida ele quer que, dada uma lista de itens sejam inseridos em uma fila de vendas e uma lista de itens sejam inseridos em uma pilha de compras.

Por fim, ele vai entrar com dois números inteiros V e C, indicando respectivamente a quantidade de vendas e compras ele quer realizar. As vendas e compras devem ser processadas das respectivas listas. Ele quer saber o lucro total das operações. Sabe-se que o lucro L é o valor total VT das vendas realizadas subtraído do valor total VC das compras realizadas (L = VT - VC).

**Exemplo de Entrada e Saída:**

| Entrada                                                                                                        | Saída        |
| -------------------------------------------------------------------------------------------------------------- | ------------ |
| 4<br>3477 arco 20<br>5455 escudo 15<br>2125 espada 12<br>3474 flecha 10<br>3477 5455 -1<br>2125 3474 -1<br>1 0 | 20 moeda(s). |
| 4<br>3477 arco 20<br>5455 escudo 15<br>2125 espada 12<br>3474 flecha 10<br>3477 5455 -1<br>2125 3474 -1<br>2 1 | 25 moeda(s). |

