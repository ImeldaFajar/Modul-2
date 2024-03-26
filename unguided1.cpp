#include <iostream>

using namespace std;

int daftar_bil[10] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

int main() {
    int indeks;
    int ganjil = daftar_bil [0];  
    int genap = daftar_bil[0];  

    cout << "Bilangan = ";
    for (indeks = 0; indeks < 10; indeks++) {
        cout << daftar_bil[indeks] << ", ";

        if (daftar_bil[indeks] < ganjil) {
            ganjil = daftar_bil[indeks];
        }

        if (daftar_bil[indeks] > genap) {
            genap = daftar_bil[indeks];
        }
    }

    cout << endl;
    cout << "Nomor Genap : ";
    for (indeks = 0; indeks < 10; indeks++) {
        if (daftar_bil[indeks] % 2 == 0) {
            cout << daftar_bil[indeks] << ", ";
        }
    }

    cout << endl;

    cout << "Nomor Ganjil : ";
    for (indeks = 0; indeks < 10; indeks++) {
        if (daftar_bil[indeks] % 2 != 0) {
            cout << daftar_bil[indeks] << ", ";
        }
    }

    cout << endl;

    return 0;
}
