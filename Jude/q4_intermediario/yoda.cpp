#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct jovem {
    string nome;
    int missoes;
    int naoCumpriu;
};
bool cmp(jovem i, jovem j) {
    return (i.nome < j.nome);
}
int main ( ) {
    int N;
    cin >> N;

    vector<jovem> jovens;
    jovem auxiliar;

    for (int i=0; i< N; i++){
        cin >> auxiliar.nome >> auxiliar.missoes >> auxiliar.naoCumpriu;
        jovens.push_back(auxiliar);
    }

    stable_sort(jovens.begin(), jovens.end(), cmp);
    for (int j = 0; j< N ; j++){
       cout << jovens[j].nome << " " << jovens[j].missoes - jovens[j].naoCumpriu << endl;
    }

    return 0;
}