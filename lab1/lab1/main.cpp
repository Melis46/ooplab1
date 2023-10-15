#include <iostream>
#include <fstream>

// Dizinin elemanlar�n�n toplam�n� hesaplayan fonksiyon
int calculateSum(const int* numbers, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum;
}
// Dizinin elemanlar�n�n �arp�m�n� hesaplayan fonksiyon
int calculateProduct(const int* numbers, int size) {
    int product = 1;
    for (int i = 0; i < size; ++i) {
        product *= numbers[i];
    }
    return product;
}
// Dizinin en k���k eleman�n� bulan fonksiyon
int findSmallest(const int* numbers, int size) {
    int smallest = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}
int main() {
    // input.txt dosyas�n� okumak i�in bir ifstream nesnesi olu�turuyoruz.
    std::ifstream inputFile("input.txt");

    // Dosya ba�ar�l� bir �ekilde a��ld� m� kontrol ediyoruz.
    if (inputFile.is_open()) {
        // �lk olarak dosyadan ka� adet say� oldu�unu okuyoruz.
        int count;
        inputFile >> count;

        // Say�lar� tutmak i�in dinamik bellek tahsis edilmi� bir dizi olu�turuyoruz.
        int* numbers = new int[count];
        for (int i = 0; i < count; ++i) {
            // Say�lar� dosyadan okuyoruz.
            inputFile >> numbers[i];
        }

        // Gerekli hesaplamalar� yap�yoruz.
        int sum = calculateSum(numbers, count);
        int product = calculateProduct(numbers, count);
        float average = static_cast<float>(sum) / count;
        int smallest = findSmallest(numbers, count);

        // Sonu�lar� ekrana yazd�r�yoruz.
        std::cout << "Sum is " << sum << std::endl;
        std::cout << "Product is " << product << std::endl;
        std::cout << "Average is " << average << std::endl;
        std::cout << "Smallest is " << smallest << std::endl;

        // Belle�i serbest b�rak�yoruz.
        delete[] numbers;

        // Dosyay� kapat�yoruz.
        inputFile.close();
    }
    else {
        // Dosya a��lamazsa hata mesaj�n� yazd�r�yoruz.
        std::cout << "Error: Unable to open the input file." << std::endl;
    }

    return 0;
}