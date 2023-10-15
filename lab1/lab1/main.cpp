#include <iostream>
#include <fstream>

// Dizinin elemanlarýnýn toplamýný hesaplayan fonksiyon
int calculateSum(const int* numbers, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum;
}
// Dizinin elemanlarýnýn çarpýmýný hesaplayan fonksiyon
int calculateProduct(const int* numbers, int size) {
    int product = 1;
    for (int i = 0; i < size; ++i) {
        product *= numbers[i];
    }
    return product;
}
// Dizinin en küçük elemanýný bulan fonksiyon
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
    // input.txt dosyasýný okumak için bir ifstream nesnesi oluþturuyoruz.
    std::ifstream inputFile("input.txt");

    // Dosya baþarýlý bir þekilde açýldý mý kontrol ediyoruz.
    if (inputFile.is_open()) {
        // Ýlk olarak dosyadan kaç adet sayý olduðunu okuyoruz.
        int count;
        inputFile >> count;

        // Sayýlarý tutmak için dinamik bellek tahsis edilmiþ bir dizi oluþturuyoruz.
        int* numbers = new int[count];
        for (int i = 0; i < count; ++i) {
            // Sayýlarý dosyadan okuyoruz.
            inputFile >> numbers[i];
        }

        // Gerekli hesaplamalarý yapýyoruz.
        int sum = calculateSum(numbers, count);
        int product = calculateProduct(numbers, count);
        float average = static_cast<float>(sum) / count;
        int smallest = findSmallest(numbers, count);

        // Sonuçlarý ekrana yazdýrýyoruz.
        std::cout << "Sum is " << sum << std::endl;
        std::cout << "Product is " << product << std::endl;
        std::cout << "Average is " << average << std::endl;
        std::cout << "Smallest is " << smallest << std::endl;

        // Belleði serbest býrakýyoruz.
        delete[] numbers;

        // Dosyayý kapatýyoruz.
        inputFile.close();
    }
    else {
        // Dosya açýlamazsa hata mesajýný yazdýrýyoruz.
        std::cout << "Error: Unable to open the input file." << std::endl;
    }

    return 0;
}