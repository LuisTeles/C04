#include <iostream>
#include <string>
using namespace std;

struct Inseto
{
    string nome;
    double tamanho;
};

// Função para ordenar os insetos por tamanho usando selection sort
void selectionSort(Inseto insetos[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (insetos[j].tamanho < insetos[menor].tamanho)
            {
                menor = j;
            }
        }
        if (menor != i)
        {
            Inseto temp = insetos[i];
            insetos[i] = insetos[menor];
            insetos[menor] = temp;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Inseto insetos[1000];

    // Leitura dos insetos
    for (int i = 0; i < n; i++)
    {
        getline(cin, insetos[i].nome);
        cin >> insetos[i].tamanho;
    }

    // Ordena os insetos por tamanho usando selection sort
    selectionSort(insetos, n);

    // Impressão dos nomes em ordem crescente de tamanho
    for (int i = 0; i < n; i++)
    {
        cout << insetos[i].nome << endl;
    }

    return 0;
}

// ----------------------
// Complexidade assintótica e modelo RAM

// Função selectionSort:
// - Complexidade: O(n^2), onde n é o número de insetos
// - Modelo RAM: para cada iteração externa, percorre o restante do vetor, faz comparações e trocas

// Função main:
// - Complexidade: O(1) para declaração de variáveis
// - O(n) para leitura dos insetos
// - O(n^2) para ordenação
// - O(n) para impressão dos nomes
// - Modelo RAM: leitura de dados, controle de fluxo, chamada à função selectionSort

// Complexidade total do programa:
// - O(n^2), pois a ordenação domina o tempo de execução para grandes n
// ----------------------
