#include <iostream>
#include <iomanip> 
#include <clocale> 

using namespace std; 

int main() {
    setlocale(LC_ALL, "Turkish");

    double finalnotu, arasinavnotu, odevnotu, donemsonunotu;

    cout << "_____Dönem Sonu Notu Hesaplama Uygulamasý_____" << endl;

    cout << "Final notunuzu girin: ";
    cin >> finalnotu;
    cout << "Ara Sýnav notunuzu girin: ";
    cin >> arasinavnotu;
    cout << "Ödev notunuzu girin: ";
    cin >> odevnotu;
   
    donemsonunotu = (finalnotu * 0.50) + (arasinavnotu * 0.35) + (odevnotu * 0.15);

    cout << "\n_____Sonuç_____" << endl;
    cout << "Dönem Sonu Notunuz: " << fixed << setprecision(2) << donemsonunotu << endl;

    if (donemsonunotu >= 50) {
        cout << "Durum: Gecti" <<endl;
    }

    else {
        cout << "Durum: Kaldi" <<endl;
    }

    return 0;
}
   
