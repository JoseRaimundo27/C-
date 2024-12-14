#include <iostream>
using namespace std;

int main () {
    int SC,MM,CK;
    cin >> SC >> MM >> CK;

    int DSC = 30 - SC;
    int DMM = 6 - MM;
    int DCK = 3 - CK;


    if (SC == 30){
        cout << "PROXIMO MUNDO";
    }else {
        cout << DSC << " " << DMM << " " << DCK;
    }


    return 0;

}