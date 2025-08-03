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

Entradas:

4
3477 arco 20
5455 escudo 15
2125 espada 12
3474 flecha 10
3477 5455 -1
2125 3474 -1
1 0


Saida:

20 moeda(s).

