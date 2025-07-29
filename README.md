Busca Binária para facilitar a busca quando o estoque estiver cheio. Ajude Eduardo a criar esse novo
sistema que armazene o código do produto, nome e quantidade em um vetor, e imprima uma mensagem
informando se existe ou não.

Entrada
A primeira linha consiste num valor inteiro N correspondente à quantidade de produtos cadastrados. E as
demais N linhas consistem em um valor inteiro correspondente ao código do produto, uma string
correspondente ao nome do produto e um valor inteiro correspondente à quantidade (unidade(s) ou
pacote(s)) em estoque. Em seguida deve ser colocado o código do produto que deseja buscar.
Saída
A saída consiste em uma mensagem dizendo se tem em estoque ou não. Se houver, o produto deve ser
impresso na mensagem.
Exemplo de entrada: Exemplo de saída:
4 Ovo em estoque!
1 Farinha 2
2 Ovo 12
3 Oleo 1
4 Sal 1
2
Exemplo de entrada: Exemplo de saída:
3 Nao existem produtos com esse codigo em
1 Frango 5 estoque!
2 Calabresa 4
3 Queijo 9
7
E) Pilha e Hashing
Considere a inserção de elementos em uma pilha e quando um elemento for removido ele deve ser
inserido em uma tabela hash de comprimento M usando endereçamento aberto. Mostre o resultado da
inserção dessas chaves utilizando hash duplo com h1(k) = k mod m e h2(k) = 1 + (k mod (m − 1)).
A entrada consiste em três linha onde a primeira é o valor de M, a segunda é a quantidade de elementos
que serão inseridos e a terceira são os elementos que devem ser armazenados.
A saída deve mostrar os elemetos depois de serem inserido na tabela hash.
obs.: Nas posições que não forem armazenado nenhum elemento deve mostrar -1.
Exemplo de entrada Exemplo de saída:

11 88 10 28 22 59 -1 17 -1 31 4 15
9
10 22 31 4 15 28 17 88 59
7 -1 43 23 -1 -1 12 6
4
12 23 6 43
F) Loja de Itens
Poles está organizando os itens disponíveis para venda em sua loja online. Ele quer criar um
sistema de compra e venda de itens.
Para isso ele tem uma lista com diversos itens e suas informações (código, nome e preço). Ele
precisa cadastrar essa lista em uma tabela hash de tamanho M = 43 para facilitar as buscas. A
função hash usada para a inserção deve ser pelo método do módulo, considerando o código do
item e o valor M, com tratamento de colisão por sondagem linear.
Em seguida ele quer que, dada uma lista de itens sejam inseridos em uma fila de de vendas e uma
lista de itens sejam inseridos em uma pilha de compras.
Por fim, ele vai entrar com dois números inteiros V e C, indicando respectivamente a quantidade
de vendas e compras ele quer realizar. As vendas e compras devem ser processadas das
respectivas listas. Ele quer saber o lucro total das operações. Sabe-se que o lucro L é o valor total
VT das vendas realizadas subtraído do valor total VC das compras realizadas ( L = VT - VC ).
Entrada
A entrada é divida em quatro partes. Na primeira parte é informado um número inteiro N (0 < N
<= 43) que é a quantidade de itens e em seguida são entradas N linhas, cada uma contendo as
informações de cada item i, sendo elas um número inteiro indicando o código do item, uma cadeia
de caracteres (sem espaço) indicando o nome do item e um número inteiro indicando o preço do
item. Na segunda parte serão informados vários números inteiros vi, indicando os códigos dos
itens a serem vendidos (a entrada termina com vi = -1). Esses itens devem ser inseridos em uma
fila. Na terceira parte serão informados vários números inteiros ci, indicando os códigos dos itens
a serem comprados (a entrada termina com ci = -1). Esses itens devem ser inseridos em uma pilha.
Na última parte, são informado dois números inteiros V e C indicando respectivamente a
quantidade de itens a serem processados da fila dos vendidos e a quantidade de itens a serem
processados da pilha dos comprados.
Saída
Deve exibir um número inteiro com o lucro total obtido seguido dos caracteres " moeda(s).".

Exemplo de entrada: Exemplo de saída:
4 20 moeda(s).
3477 arco 20
5455 escudo 15
2125 espada 12
3474 flecha 10
3477 5455 -1
2125 3474 -1
1 0
Exemplo de entrada: Exemplo de saída:
4 25 moeda(s).
3477 arco 20
5455 escudo 15
2125 espada 12
3474 flecha 10
3477 5455 -1
2125 3474 -1
2 1

