#include <iostream>
using namespace std;

int main ( ) {
    int q1,q2,q3; //Quantidade de ovos
    int e1,e2,e3; // ovos envenenados

    cin >> q1 >> q2 >> q3;
    cin >> e1 >> e2 >> e3;

    int cacada_1 = (q1 - e1) - 2*e1;
    int cacada_2 = (q2 - e2) - 2*e2;
    int cacada_3 = (q3 - e3) - 2*e3;

    int resultado = cacada_1 + cacada_2 + cacada_3;
    cout << resultado;
    return 0;

}