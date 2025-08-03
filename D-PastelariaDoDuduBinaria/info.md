D) Pastelaria do Dudu (Binária)
Eduardo, após refletir muito, achou que poderia melhorar o sistema do estoque adicionando um 
código em ordem crescente em cada produto cadastrado, dessa forma, você pode usar um algoritmo de 
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
impresso na mensagem

Entradas:

4
1 Farinha 2
2 Ovo 12
3 Oleo 1
4 Sal 1
2

Saida:

Ovo em estoque!



Entradas:

3
1 Frango 5
2 Calabresa 4
3 Queijo 9
7

Saida:

Nao existem produtos com esse código em estoque!
