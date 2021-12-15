#include <iostream>
using namespace std;

int testy, a, b;

void nwd(int liczba1, int liczba2) {
    int reszta=1, dzielnik;
    while(reszta!=0) {
        reszta = liczba1%liczba2;
        if(reszta==0) {
            dzielnik = liczba2;
        } else {
            liczba1 = liczba2;
            liczba2 = reszta;
        }
    }
    cout << dzielnik << endl;
}

int main() {
    cin >> testy;
    for(int i=0; i<testy; i++) {
        cin >> a >> b;
        nwd(a,b);
    }
}
