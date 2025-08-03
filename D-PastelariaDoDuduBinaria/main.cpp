#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Estrutura que representa um produto
struct Produto
{
    int codigo;     // Código do produto
    string nome;    // Nome do produto
    int quantidade; // Quantidade em estoque
};

// Função para realizar busca binária pelo código do produto
int buscaBinaria(const vector<Produto> &produtos, int codigoBusca)
{
    int esquerda = 0, direita = produtos.size() - 1;
    while (esquerda <= direita)
    {
        int meio = esquerda + (direita - esquerda) / 2;
        // Verifica se encontrou o produto
        if (produtos[meio].codigo == codigoBusca)
        {
            return meio; // Retorna o índice do produto encontrado
        }
        // Se o código do meio é menor, busca na metade direita
        else if (produtos[meio].codigo < codigoBusca)
        {
            esquerda = meio + 1;
        }
        // Se o código do meio é maior, busca na metade esquerda
        else
        {
            direita = meio - 1;
        }
    }
    return -1; // Produto não encontrado
}

int main()
{
    int N;
    cin >> N; // Lê a quantidade de produtos
    vector<Produto> produtos(N);
    // Lê os dados de cada produto
    for (int i = 0; i < N; ++i)
    {
        cin >> produtos[i].codigo >> produtos[i].nome >> produtos[i].quantidade;
    }
    int codigoBusca;
    cin >> codigoBusca;                            // Lê o código a ser buscado
    int idx = buscaBinaria(produtos, codigoBusca); // Busca o produto
    if (idx != -1)
    {
        // Produto encontrado
        cout << produtos[idx].nome << " em estoque!" << endl;
    }
    else
    {
        // Produto não encontrado
        cout << "Nao existem produtos com esse código em estoque!" << endl;
    }
    return 0;
}

// ----------------------
// Complexidade assintótica e modelo RAM

// Função buscaBinaria:
// - Complexidade: O(log n), onde n é o número de produtos
// - Modelo RAM: a cada iteração, reduz o espaço de busca pela metade, faz comparações simples

// Função main:
// - O(1) para declaração de variáveis
// - O(n) para leitura dos produtos
// - O(log n) para busca binária
// - O(1) para impressão do resultado
// - Modelo RAM: leitura sequencial dos dados, controle de fluxo, chamada à função buscaBinaria

// Complexidade total do programa:
// - O(n) para leitura dos dados domina para grandes n, pois a busca é O(log n)
// ----------------------
