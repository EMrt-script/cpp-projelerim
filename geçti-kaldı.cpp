#include <iostream>
#include <iomanip> 
int main() {
    
    double sinav1, sinav2, ortalama;

    std::cout << "*_Geçti Kaldı uygulaması_*" << std::endl;
    std::cout << "1. Sinav notunuzu girin: ";
    std::cin >> sinav1;

    std::cout << "2. Sinav notunuzu girin: ";
    std::cin >> sinav2;


    ortalama = (sinav1 + sinav2) / 2.0;

    
    std::cout << "__________________________" << std::endl;
    std::cout << "Not Ortalamaniz: " << std::fixed << std::setprecision(2) << ortalama << std::endl;

    
    if (ortalama >= 50) {
        std::cout << "Durum: Gecti" << std::endl;
    } 
   
    else {
        std::cout << "Durum: Kaldi" << std::endl;
    }

    return 0;
}