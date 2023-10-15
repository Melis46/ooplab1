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
