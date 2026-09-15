#include <iostream>

using namespace std;

int main () {
    string nt, nk, np;
    char ks;
    int ha, hj ;
    float bm, pjk, ba, bj ;
    bool status ;

    nt = "Toko Buah Segar";
    nk = "Andi";
    ks = 'A';
    ha = 15500 ;
    hj = 12750 ;
    bm = 0.5 ;
    pjk = 11.5 ;
    status = 1;
    /*inisiasi*/

    cout << "--------------------" << endl ;
    cout << nt << endl;
    cout << "Nama Kasir : " << nk << " (" << ks << ")" << endl;
    cout << "--------------------" << endl <<endl ;
    /*buat identitas toko*/

    cout << "nama pembeli : ";
    cin >> np ;
    cout << "berat apel (kg) : ";
    cin >> ba ;
    cout <<"berat jeruk (kg) : ";
    cin >> bj;
    /*bagian input*/

    cout << endl << "--------------------" << endl <<endl ;
    cout << "STRUK BELANJA"<< endl;
    cout << "Pembeli : " << np << endl;
    cout << "apel (kg) : " << ba << " kg" << endl;
    cout << "jeruk (kg) : " << bj << " kg"<<endl;
    cout << endl << "--------------------" << endl <<endl ;
    /*bagian output*/


    return 0;

}