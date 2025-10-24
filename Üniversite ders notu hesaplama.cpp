#include <iostream>
#include <iomanip> 
#include <clocale> 

using namespace std; 

int main() {
    setlocale(LC_ALL, "Turkish");

    double finalnotu, arasinavnotu, odevnotu, donemsonunotu;

    cout << "_____D�nem Sonu Notu Hesaplama Uygulamas�_____" << endl;

    cout << "Final notunuzu girin: ";
    cin >> finalnotu;
    cout << "Ara S�nav notunuzu girin: ";
    cin >> arasinavnotu;
    cout << "�dev notunuzu girin: ";
    cin >> odevnotu;
   
    donemsonunotu = (finalnotu * 0.50) + (arasinavnotu * 0.35) + (odevnotu * 0.15);

    cout << "\n_____Sonu�_____" << endl;
    cout << "D�nem Sonu Notunuz: " << fixed << setprecision(2) << donemsonunotu << endl;

    if (donemsonunotu >= 50) {
        cout << "Durum: Gecti" <<endl;
    }

    else {
        cout << "Durum: Kaldi" <<endl;
    }

    return 0;
}
   