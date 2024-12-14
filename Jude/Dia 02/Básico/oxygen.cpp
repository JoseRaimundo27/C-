#include <iostream>
using namespace std;

int main ( ) {
    int X,Y;
    cin >> X >> Y;
    int quantidade = X - 9*Y;

    if(quantidade > 0 ) {
        cout << "Precisa de mais difusores!" << endl;
        cout << int(quantidade/9) + 1;
    }else {
        cout << "Lar doce lar.";
    }
    return 0;
}