#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Estrutura que representa um gladiador com nome, força, habilidade e idade
struct Gladiador
{
    string nome;
    int forca;
    int habilidade;
    int idade;
};

// Função que calcula o dano de um ataque realizado por um gladiador.
// O dano é calculado como: força + (2 elevado à habilidade).
int ataque(const Gladiador &g)
{
    return g.forca + pow(2, g.habilidade);
}

// Função que simula o combate entre dois gladiadores.
// Cada gladiador começa com 100 de vida.
// Os gladiadores atacam alternadamente até que um deles fique sem vida.
// Retorna true se o primeiro gladiador vencer, false caso contrário.
bool combate(const Gladiador &g1, const Gladiador &g2)
{
    int vida1 = 100;   // Vida inicial do gladiador 1
    int vida2 = 100;   // Vida inicial do gladiador 2
    bool turno = true; // true: turno do g1, false: turno do g2

    while (vida1 > 0 && vida2 > 0)
    {
        if (turno)
        {
            vida2 -= ataque(g1); // g1 ataca g2
        }
        else
        {
            vida1 -= ataque(g2); // g2 ataca g1
        }
        turno = !turno; // Alterna o turno
    }
    return vida1 > 0; // Retorna true se g1 venceu
}

int main()
{
    Gladiador gladiador[5];

    // Lê os dados de 5 gladiadores do usuário
    for (int i = 0; i < 5; i++)
    {
        cout << "Nome do gladiador" << endl;
        getline(cin >> ws, gladiador[i].nome);
        cout << "Forca do gladiador" << endl;
        cin >> gladiador[i].forca;
        cout << "Habilidade do gladiador" << endl;
        cin >> gladiador[i].habilidade;
        cout << "Idade do gladiador" << endl;
        cin >> gladiador[i].idade;
    }

    // Permite ao usuário escolher dois gladiadores para batalhar
    int aux;
    int g1 = -1, g2 = -1;
    int j = 0;
    while (cin >> aux && aux != -1)
    {
        // Verifica se o índice do gladiador é válido
        if (aux < 0 || aux >= 5)
        {
            cout << "Gladiador invalido. Tente novamente." << endl;
            continue;
        }
        // Seleciona o primeiro gladiador
        if (g1 == -1)
        {
            g1 = aux;
        }
        else
        {
            // Seleciona o segundo gladiador e realiza o combate
            g2 = aux;
            bool resultado = combate(gladiador[g1], gladiador[g2]);
            if (resultado)
            {
                cout << gladiador[g1].nome << " ganhou a batalha contra " << gladiador[g2].nome << endl;
            }
            else
            {
                cout << gladiador[g2].nome << " ganhou a batalha contra " << gladiador[g1].nome << endl;
            }
            // Reseta para permitir novas batalhas
            g1 = -1;
            g2 = -1;
        }
    }
}

// ----------------------
// Complexidade assintótica e modelo RAM
//
// Função ataque:
// - Complexidade: O(1) (operações aritméticas básicas)
// - Modelo RAM: 1 soma, 1 exponenciação
//
// Função combate:
// - Complexidade: O(V), onde V é o número de rodadas até que um gladiador perca toda a vida
// - Modelo RAM: cada iteração faz 1 chamada a ataque (O(1)), 1 subtração, 1 alternância de turno
//
// Função main:
// - Complexidade: O(1) para declaração de variáveis
// - O(5) para leitura dos gladiadores (laço fixo)
// - O(N) para batalhas, onde N é o número de pares de gladiadores escolhidos pelo usuário
// - Modelo RAM: leitura de dados, controle de fluxo, chamadas às funções combate e ataque
//
// Complexidade total do programa:
// - O(5 + N*V), onde 5 é o número de gladiadores, N é o número de batalhas e V é o número médio de rodadas por batalha
// ----------------------
