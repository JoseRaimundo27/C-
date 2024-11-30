#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct AmigosBilbo {
    string nome;
    int peso;
};


int main() {
    int N, C;
    cin >> N;

    vector<AmigosBilbo> v;
    vector<string> gordos;
    bool isGordo;
    AmigosBilbo amigo;
    int pesoTotal = 0;

    // Lê os dados dos amigos
    for (int i = 0; i < N; i++) {
        cin >> amigo.nome >> amigo.peso;
        v.push_back(amigo);
    }

    cin >> C; // Capacidade máxima do galho

    for (int i = 0; i < N; i++) {
        if(v[i].peso > C) {
            isGordo = 1;
            gordos.push_back(v[i].nome);
        }
    }

    if(isGordo) {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for(int i=0; i < gordos.size(); i++){
            cout << gordos[i] << endl;
        }
    }else {
        cout << "Vamos todos encontrar a montanha!";
    }

    return 0;
}
