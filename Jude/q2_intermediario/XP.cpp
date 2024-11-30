#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N; // Quantidade de missões
    
    vector<int> XP(N);
    int B[N];
    
    // Entrada dos valores de XP de cada missão
    for (int i = 0; i < N; i++) {
        cin >> XP[i];
    }
    
    // Entrada dos valores de bônus de cada missão
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    int M, A;
    cin >> M >> A; // XP necessário para subir de nível e bônus adicional
    
    // Cálculo do total de XP
    int totalXP = 0;
    for (int i = 0; i < N; i++) {
        totalXP += XP[i] * (B[i] + A); // Calcula o XP com o bônus
    }
    
    // Verificação se Ori subiu de nível
    if (totalXP >= M) {
        cout << "Upou de Nivel!" << endl;
    } else {
        cout << "Nao foi dessa vez!" << endl;
    }

    return 0;
}
