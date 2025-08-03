E) Pilha e Hashing
Considere a inserção de elementos em uma pilha e quando um elemento for removido ele deve ser 
inserido em uma tabela hash de comprimento M usando endereçamento aberto. Mostre o resultado da 
inserção dessas chaves utilizando hash duplo com h1(k) = k mod m e h2(k) = 1 + (k mod (m − 1)).
A entrada consiste em três linha onde a primeira é o valor de M, a segunda é a quantidade de elementos 
que serão inseridos e a terceira são os elementos que devem ser armazenados.
A saída deve mostrar os elemetos depois de serem inserido na tabela hash.
obs.: Nas posições que não forem armazenado nenhum elemento deve mostrar -1


entradas:

11
9
10 22 31 4 15 28 17 88 59

Saida:

88 10 28 22 59 -1 17 -1 31 4 15
