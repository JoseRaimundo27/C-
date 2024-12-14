#include <iostream>
using namespace std;
int main () {
    string z,g,d,c;
    cin >> z >> g ;
    cin >> d >> c;

    if (z == d){
        cout << "Driblado" << endl;
        if( g == c) {
            cout << "Gol";
            return 0;
        }
        cout << "...e o goleiro pega";
        return 0;

    } else {
        cout << "Bloqueado";
        return 0;
    }

}