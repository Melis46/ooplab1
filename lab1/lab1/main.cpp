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