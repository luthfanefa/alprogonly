/*
nama : Luthfan F Achmadi
Kelas : C
NPM : 140810260005
*/

#include <iostream>

using namespace std;

// 1. Menghitung Mundur
void hitungMundur(int n) {
    if (n <= 0) {
        cout << "Selesai!" << endl;
        return;
    }
    cout << n << " ";
    hitungMundur(n - 1);
}

// 2. Faktorial
int faktorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

// 3. Penjumlahan 1 sampai n
int totalPenjumlahan(int n) {
    if (n <= 1) {
        return 1;
    }
    return n + totalPenjumlahan(n - 1);
}

// 4. Fibonacci
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 5. Pangkat (a dipangkatkan b)
int pangkat(int a, int b) {
    if (b == 0) {
        return 1; // Semua bilangan pangkat 0 adalah 1
    }
    return a * pangkat (a, b - 1);
}

int main() {
    int pilihan;

    do {
        cout << "\n=========================================\n";
        cout << "                   MENU\n";
        cout << "=========================================\n";
        cout << "1. Hitung Mundur\n";
        cout << "2. Faktorial\n";
        cout << "3. Penjumlahan (1 sampai n)\n";
        cout << "4. Deret Fibonacci\n";
        cout << "5. Menghitung Pangkat\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu (0-5): ";
        cin >> pilihan;

        cout << "-----------------------------------------\n";

        switch (pilihan) {
            case 1: {
                int n;
                cout << "Masukkan angka awal hitung mundur: ";
                cin >> n;
                cout << "Hasil: ";
                hitungMundur(n);
                break;
            }
            case 2: {
                int n;
                cout << "Masukkan angka untuk faktorial: ";
                cin >> n;
                cout << "Hasil " << n << "! = " << faktorial(n) << endl;
                break;
            }
            case 3: {
                int n;
                cout << "Masukkan angka n (1 + 2 + ... + n): ";
                cin >> n;
                cout << "Total penjumlahan 1 sampai " << n << " = " << totalPenjumlahan(n) << endl;
                break;
            }
            case 4: {
                int n;
                cout << "Masukkan suku ke-n Fibonacci: ";
                cin >> n;
                cout << "Nilai Fibonacci suku ke-" << n << " = " << fibonacci(n) << endl;
                break;
            }
            case 5: {
                int base, exp;
                cout << "Masukkan bilangan basis (a): ";
                cin >> base;
                cout << "Masukkan pangkat (b): ";
                cin >> exp;
                cout << "Hasil " << base << "^" << exp << " = " << pangkat(base, exp) << endl;
                break;
            }
            case 0:
                cout << "Program selesai. Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi.\n";
        }
    } while (pilihan != 0);

    return 0;
}