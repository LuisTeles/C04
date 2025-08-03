#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
using namespace std;

const int M = 43;

struct Item
{
    int codigo;
    string nome;
    int preco;
    bool ocupado;
    Item() : codigo(0), nome(""), preco(0), ocupado(false) {}
};

int hashFunc(int codigo)
{
    return codigo % M;
}

void inserirHash(vector<Item> &tabela, int codigo, string nome, int preco)
{
    int h = hashFunc(codigo);
    while (tabela[h].ocupado)
    {
        h = (h + 1) % M;
    }
    tabela[h].codigo = codigo;
    tabela[h].nome = nome;
    tabela[h].preco = preco;
    tabela[h].ocupado = true;
}

int buscarPreco(vector<Item> &tabela, int codigo)
{
    int h = hashFunc(codigo);
    int start = h;
    while (tabela[h].ocupado)
    {
        if (tabela[h].codigo == codigo)
            return tabela[h].preco;
        h = (h + 1) % M;
        if (h == start)
            break;
    }
    return 0;
}

int main()
{
    int N;
    cin >> N;
    vector<Item> tabela(M);

    for (int i = 0; i < N; ++i)
    {
        int codigo, preco;
        string nome;
        cin >> codigo >> nome >> preco;
        inserirHash(tabela, codigo, nome, preco);
    }

    queue<int> filaVendas;
    int vi;
    while (cin >> vi && vi != -1)
    {
        filaVendas.push(vi);
    }

    stack<int> pilhaCompras;
    int ci;
    while (cin >> ci && ci != -1)
    {
        pilhaCompras.push(ci);
    }

    int V, C;
    cin >> V >> C;

    int VT = 0, VC = 0;
    for (int i = 0; i < V && !filaVendas.empty(); ++i)
    {
        int codigo = filaVendas.front();
        filaVendas.pop();
        VT += buscarPreco(tabela, codigo);
    }
    for (int i = 0; i < C && !pilhaCompras.empty(); ++i)
    {
        int codigo = pilhaCompras.top();
        pilhaCompras.pop();
        VC += buscarPreco(tabela, codigo);
    }

    int L = VT - VC;
    cout << L << " moeda(s)." << endl;
    return 0;
}

/*
Análise de Complexidade:

Tempo:
- A inserção dos itens na tabela hash é O(N), pois cada item é inserido uma vez e a sondagem linear é eficiente para tabelas pouco ocupadas.
- A inserção dos códigos de venda na fila e dos códigos de compra na pilha é O(V) e O(C), respectivamente, onde V e C são o número de vendas e compras informados.
- O processamento das vendas e compras (busca do preço e soma) é O(V) para vendas e O(C) para compras, pois cada operação de busca pode ser considerada O(1) em média devido à sondagem linear.
- Portanto, a complexidade total é O(N + V + C).

Espaço:
- O uso de espaço é O(M) para a tabela hash, O(V) para a fila de vendas e O(C) para a pilha de compras.
- Logo, o uso total de espaço é O(M + V + C).
*/
