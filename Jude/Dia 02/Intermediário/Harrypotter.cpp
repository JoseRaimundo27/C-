#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para std::binary_search
using namespace std;

int main() {
    int N, M, C;

    // Leitura do número de feitiços gerais
    cin >> N;
    vector<string> gerais(N);
    for (int i = 0; i < N; ++i) {
        cin >> gerais[i];
    }

    // Leitura do número de feitiços proibidos
    cin >> M;
    vector<string> proibidos(M);
    for (int i = 0; i < M; ++i) {
        cin >> proibidos[i];
    }

    // Leitura do número de consultas
    cin >> C;
    vector<string> consultas(C);
    for (int i = 0; i < C; ++i) {
        cin >> consultas[i];
    }

    // Resolução das consultas
    for (int i = 0; i < C; ++i) {
        string feitico = consultas[i];

        // Busca binária em ambas as listas (gerais e proibidos)
        if (binary_search(gerais.begin(), gerais.end(), feitico)) {
            cout << "Geral" << endl;
        } else if (binary_search(proibidos.begin(), proibidos.end(), feitico)) {
            cout << "Proibido" << endl;
        }
    }

    return 0;
}
// g++ -std=c++11 programa.cpp -o programa