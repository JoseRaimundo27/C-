#include <iostream>
#include <vector>
#include <algorithm>

struct dataDark{
    int dia;
    int mes;
    int ano;
};

bool cmp (dataDark d1, dataDark d2) {
    return((d1.ano < d2.ano) or (d1.ano == d2.ano and d1.mes<d2.mes) or (d1.ano == d2.ano and d1.mes==d2.mes and d1.dia<d2.dia));
}

using namespace std;

int main() {
    vector<dataDark> v;
    dataDark data;

	while (cin >> data.dia >> data.mes >> data.ano) {
        v.push_back(data); // Armazena no vetor
    }

    sort(v.begin(), v.end(), cmp);
    for(int i =0; i <v.size(); i++){
        cout << v[i].dia << " " << v[i].mes << " " << v[i].ano << endl;
    }
    

    return 0;
}