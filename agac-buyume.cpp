//Başlangıç boyu ve özel büyüme kuralları verilen bir ağacın, girilen yıl sonunda kaç santimetre olacağını hesaplayan bir program.
#include <iostream>

int main() {
    
    int baslangicBoyu = 10;     
    int buyumeMiktari3Yil = 4;   
    int buyumeMiktari1Yil = 1;  
    int buyumePeriyodu = 3;    

    int gecenYil;

    std::cout << "Ağacın Boyu 10cm, 1 yılda uzama 1cm, 3 yılda uzama 4 cm" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "Ağacin kac yil sonraki boyunu hesaplamak istersiniz? Yil sayisini girin: ";
    
    std::cin >> gecenYil;


    // Kaç tane 3 yıllık döngü var?
    int donguSayisi = gecenYil / buyumePeriyodu; 


    // % (modulo) bölüm kalanını verir
    // Örnek: 7 % 3 = 1 = modulo
    int kalanYillar = gecenYil % buyumePeriyodu;


    int toplamUzama = (donguSayisi * buyumeMiktari3Yil) + (kalanYillar * buyumeMiktari1Yil);
    int sonBoy = baslangicBoyu + toplamUzama;

    std::cout << gecenYil << " yil sonra agacin boyu: " << sonBoy << " cm olur." << std::endl;

    return 0;
}