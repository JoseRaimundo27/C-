#include <iostream>

using namespace std;

int main() {
    int levi = 20;
    int soldado = 5;
    int titas;

    cin >> titas;

    int qntdSoldados = (titas - levi)/soldado;

    cout << qntdSoldados;
    return 0;
}