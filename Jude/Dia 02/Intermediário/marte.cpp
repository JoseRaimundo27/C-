#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// Função de comparação
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second; // Menor ID em caso de empate
    }
    return a.first > b.first; // Maior nota primeiro
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<pair<int, int>> candidatos;

    // Leitura dos candidatos
    for (int i = 0; i < Q; ++i) {
        int nota, id;
        cin >> nota >> id;
        candidatos.push_back({nota, id});
    }

    // Ordena candidatos usando a função cmp
    sort(candidatos.begin(), candidatos.end(), cmp);

    // Seleciona os N primeiros candidatos
    set<pair<int, int>> selecionados;
    for (int i = 0; i < N; ++i) {
        selecionados.insert(candidatos[i]);
    }

    int C;
    cin >> C;

    for (int i = 0; i < C; ++i) {
        int nota, id;
        cin >> nota >> id;
        if (selecionados.count({nota, id})) {
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }

    return 0;
}
