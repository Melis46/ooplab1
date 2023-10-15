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
