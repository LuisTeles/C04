#include <iostream>
#include <string>
using namespace std;

// Estrutura para armazenar informações de um produto
struct Produto
{
    string nome;
    int quantidade;
};

// Função para realizar a busca sequencial por um produto
bool buscaSequencial(Produto produtos[], int N, const string &busca)
{
    for (int i = 0; i < N; i++)
    {
        if (produtos[i].nome == busca)
        {
            return true; // Produto encontrado
        }
    }
    return false; // Produto não encontrado
}

int main()
{
    int N;
    cin >> N; // Lê o número de produtos
    cin.ignore();

    Produto produtos[100]; // Vetor para armazenar os produtos

    // Lê os dados dos produtos
    for (int i = 0; i < N; i++)
    {
        string linha;
        getline(cin, linha); // Lê a linha com nome e quantidade
        size_t pos = linha.find_last_of(' ');
        produtos[i].nome = linha.substr(0, pos);              // Extrai o nome
        produtos[i].quantidade = stoi(linha.substr(pos + 1)); // Extrai a quantidade
    }

    string busca;
    getline(cin, busca); // Lê o nome do produto a ser buscado

    // Chama a função de busca sequencial
    bool encontrado = buscaSequencial(produtos, N, busca);

    // Exibe o resultado da busca
    if (encontrado)
    {
        cout << busca << " em estoque!" << endl;
    }
    else
    {
        cout << "Nao existe " << busca << " em estoque!" << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}

// ----------------------
// Complexidade assintótica e modelo RAM

// Função buscaSequencial:
// - Complexidade: O(n), onde n é o número de produtos
// - Modelo RAM: percorre o vetor de produtos, faz comparações de strings

// Função main:
// - Complexidade: O(1) para declaração de variáveis
// - O(n) para leitura dos produtos
// - O(n) para busca sequencial
// - O(1) para impressão do resultado
// - Modelo RAM: leitura de dados, controle de fluxo, chamada à função buscaSequencial

// Complexidade total do programa:
// - O(n), pois a busca sequencial domina o tempo de execução para grandes n
// ----------------------