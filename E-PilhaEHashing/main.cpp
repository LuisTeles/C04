#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    vector<int> elements(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> elements[i];
    }

    // Inserir elementos na pilha
    stack<int> pilha;
    for (int i = 0; i < N; ++i)
    {
        pilha.push(elements[i]);
    }

    // Inicializar tabela hash
    vector<int> hashTable(M, -1);

    // Remover da pilha e inserir na tabela hash
    while (!pilha.empty())
    {
        int k = pilha.top();
        pilha.pop();
        int h1 = k % M;
        int h2 = 1 + (k % (M - 1));
        int idx = h1;
        int tries = 0;
        while (hashTable[idx] != -1 && tries < M)
        {
            idx = (h1 + tries * h2) % M;
            ++tries;
        }
        // Se encontrou posição livre
        if (hashTable[idx] == -1)
        {
            hashTable[idx] = k;
        }
    }

    // Imprimir resultado
    for (int i = 0; i < M; ++i)
    {
        cout << hashTable[i];
        if (i < M - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}

/*
Análise de Complexidade:

Tempo:
- A inserção dos elementos na pilha é O(N).
- A remoção dos elementos da pilha é O(N).
- Para cada elemento removido, a inserção na tabela hash pode exigir até O(M) tentativas no pior caso (quando a tabela está quase cheia e há muitas colisões), então a complexidade total da inserção na hash é O(N * M).
- Portanto, a complexidade total do algoritmo é O(N * M).

Espaço:
- O uso de espaço é O(N) para a pilha, O(N) para o vetor de elementos e O(M) para a tabela hash.
- Logo, o uso total de espaço é O(N + M).
*/
