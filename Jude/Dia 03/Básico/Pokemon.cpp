#include <iostream>

using namespace std;

int main() {
    int resistencia, dano;
    cin >> resistencia >> dano;
    
    int ataques = 0;
    while (resistencia > 0 && dano > 0) {
        resistencia -= dano;
        dano--; // O dano diminui a cada ataque
        ataques++;
    }
    
    if (resistencia > 0)
        cout << "F" << endl;
    else
        cout << ataques << endl;
    
    return 0;
}
