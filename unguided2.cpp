#include <iostream>
using namespace std;

int main() {
    int x_size, y_size, z_size;

    cout << "Masukkan jumlah elemen untuk dimensi X: ";
    cin >> x_size;
    cout << "Masukkan jumlah elemen untuk dimensi Y: ";
    cin >> y_size;
    cout << "Masukkan jumlah elemen untuk dimensi Z: ";
    cin >> z_size;

    int arr[x_size][y_size][z_size];

    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z <<"] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    cout << "Data Array:" << endl;
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z <<"] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << endl << "Array dalam format ringkas:" << endl;
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}