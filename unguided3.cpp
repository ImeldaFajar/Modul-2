#include <iostream>
using namespace std;

int cariMaksimum(int arr[], int panjang) {
    int maksimum = arr[0];
    for (int i = 1; i < panjang; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

int cariMinimum(int arr[], int panjang) {
    int minimum = arr[0];
    for (int i = 1; i < panjang; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

double hitungRataRata(int arr[], int panjang) {
    double total = 0;
    for (int i = 0; i < panjang; i++) {
        total += arr[i];
    }
    return total / panjang;
}

int main() {
    int panjang;
    cout << "Masukkan panjang array: ";
    cin >> panjang;

    int arr[panjang];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < panjang; i++) {
        cin >> arr[i];
    }

    int pilihan;
    cout << "Menu:" << endl;
    cout << "1. Cari nilai Maksimum" << endl;
    cout << "2. Cari nilai Minimum" << endl;
    cout << "3. Hitung nilai rata-rata" << endl;
    cout << "Pilih opsi: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Nilai Maksimum: " << cariMaksimum(arr, panjang) << endl;
            break;
        case 2:
            cout << "Nilai Minimum: " << cariMinimum(arr, panjang) << endl;
            break;
        case 3:
            cout << "Nilai rata-rata: " << hitungRataRata(arr, panjang) << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
