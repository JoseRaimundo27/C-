#include <iostream>

using namespace std;

int main() {
    int f1,f2,f3,f4,f5;
    int soma;

    cin >> f1 >> f2 >> f3 >> f4 >> f5;

    soma = f1 + f2 + f3 + f4 + f5;
    if (soma > 5000) {
        cout << "Acesso proibido";
    }else {
        cout << "Acesso liberado";
    }

    return 0;
}