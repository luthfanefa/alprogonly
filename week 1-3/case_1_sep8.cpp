/*
    author : luthfan
    NPM    : 260005
*/

#include <iostream>

using namespace std;

int main () {
     
    string nama_p;
    float tugas, uts, uas, nilai_a;
    int npm, kkm_u;
    // inisiasi

    cout << "+---------------------------+" << endl
         << "| kalkulator nilai pratikum |" << endl
         << "+---------------------------+" << endl << endl;

    cout << "nama praktikan : ";
    cin >> nama_p;
    cout << "3 NPM akhir : ";
    cin >> npm;
    cout << "nllai tugas : ";
    cin >> tugas;
    cout << "nilai UTS : ";
    cin >> uts ; 
    cout << "nilai uas : ";
    cin >> uas;
    //input

    cout << endl << endl
         << "----------------------------- "
         << endl << endl;

    nilai_a = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
    kkm_u = 60 + ((npm * 2) % 15);
    //proses

    cout << "HASIL PERHITUNGAN " << endl
         << "Nilai akhir : " << nilai_a << endl
         << "KKM unik kamu adalah : " << kkm_u << endl << endl;
    //output

    int pil ;
    cout << "keluar? (ketik angka berapa aja) ";
    cin >> pil;
  
    return 0;
}