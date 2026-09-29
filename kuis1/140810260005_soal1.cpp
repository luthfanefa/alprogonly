#include <iostream>

using namespace std;

void garis(){
    cout << "----------------------------------" << endl;
}

void header(){
    cout << "+--------------------------------+" << endl
         << "|      warung makan dewa 3D      |" << endl
         << "+--------------------------------+" << endl ;
}

void harga (int &porsi){
    int harga = 20000;
    int total = 0;
    if (porsi < 20){
        total = harga*porsi;
        cout << "Sub Total : " << total << endl;
        cout << "potongan harga : 0%!!";
    } if (porsi >= 20 && porsi < 50){
        total = harga*porsi;
        cout << "Sub Total : " << total << endl;
        total -= total*0.1;
        cout << "potongan harga : 10%!!";
    } if (porsi >= 50 && porsi < 100){
        total = harga*porsi;
        cout << "Sub Total : " << total << endl;
        total -= total*0.15;
        cout << "potongan harga : 15%!!";
    } if (porsi > 100){
        total = harga*porsi;
        cout << "Sub Total : " << total << endl;
        total -= total*0.2;
        cout << "potongan harga : 20%!!";
    }
    cout << endl; 
    porsi = total;
}

int input (int &porsi) {
    cout << "masukan jumlah porsi : " ; cin >> porsi;
    harga(porsi);
    return porsi;
}

void nota(int &total){
    garis();
    cout << "Total pembelian anda : " << total << "Rp.";
}

int main(int porsi){
    header();
    input(porsi);
    nota(porsi);
    return 0;
}