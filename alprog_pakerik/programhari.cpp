#include <iostream>
#include <string>

using namespace std;


string tentukanHari(int tanggal, int bulan, int tahun) {

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    

    string namaHari[] = { "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu" };


    if (bulan < 3) {
        tahun -= 1;
    }


    int indeksHari = (tahun + tahun / 4 - tahun / 100 + tahun / 400 + t[bulan - 1] + tanggal) % 7;

    return namaHari[indeksHari];
}

int main() {
    int tgl, bln, thn;

    cout << "=======================================\n";
    cout << "   Program Penentu Hari (Masehi)\n";
    cout << "=======================================\n";

    // Menerima input dari user
    cout << "Masukkan Tanggal (1-31) : ";
    cin >> tgl;
    cout << "Masukkan Bulan (1-12)   : ";
    cin >> bln;
    cout << "Masukkan Tahun (YYYY)   : ";
    cin >> thn;


    cout << "\nTanggal " << tgl << "/" << bln << "/" << thn << " jatuh pada hari: ";
    cout << tentukanHari(tgl, bln, thn) << endl;

    return 0;
}