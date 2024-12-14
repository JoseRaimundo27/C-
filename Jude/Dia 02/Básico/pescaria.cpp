#include <iostream>
using namespace std;

int main ( ) {
    int qtd, preco;
    cin >> qtd >> preco;

    int dinheiro = qtd*preco;

    if(dinheiro >= 7500) {
        cout << "Vara de Iridio";
    }else if(dinheiro >= 1800){
        cout << "Vara de Fibra de Vidro";
    }else if( dinheiro >= 500) {
        cout << "Vara de Bambu";
    }else {
        cout << "Paciencia Firmino!";
    }
    return 0;
}