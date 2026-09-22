#include <iostream>

using namespace std;

void menu(){
    cout << "------------------------" << endl
         << "       alat hitung      " << endl
         << "------------------------" << endl
         << "1. segitiga" << endl
         << "2. persegi" << endl
         << "3. keluar" << endl;
}

void garis (){
    cout << "------------------------" << endl;
}

void segitiga(const int &alas, const int &tinggi){
    int hasil = alas*tinggi/2;
    cout << "Luas segitiga : " << hasil << " cm^2" << endl << endl ;
}
void persegi(const int &panjang, const int &lebar){
    int hasil = panjang*lebar;
    cout << "Luas persegi : " << hasil << " cm^2" << endl << endl ;
    for (int i = 0 ; i < panjang ; i++){
        for (int j = 0 ; j < lebar ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}  

int main (){

    int pil;
    int a, b;
    do {

        menu();
        cout << "-";
        cin >> pil;
        garis();
        switch (pil)
        {
        case 1:
            cout << "masukan alas (cm): "; cin >> a;
            cout << "masukan tinggi (cm): "; cin >> b;
            segitiga(a, b);
            break;
        
        case 2:
            cout << "masukan panjang (cm): "; cin >> a;
            cout << "masukan lebar (cm): "; cin >> b;
            persegi(a, b);
            break;
        }

    } while (pil > 0 && pil < 3);

    return 0;
}