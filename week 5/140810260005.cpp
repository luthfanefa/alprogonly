/*
nama : Luthfan F Achmadi
program : GameDev
NPM : 14081026005
Kelas : C
tanggal : 22/9/26
deskripsi : pengguna memasukan data2 melalui fungsi input, yang kemudian di rapihkan dengan fungsikartu, terus ngehitung crit dmgnya pake funsi hitungcrtdmg
*/
#include <iostream>

using namespace std;

string nama;
int atk;
float crt_r, crt_dmg;
char kelas;
// inisiasi

// buat fungsi header doang
void header(){
    cout << "+--------------------------------------+" << endl
         << "| hai pengguna, masukan data karakter! |" << endl
         << "+--------------------------------------+" << endl;
}

//buat fungsi garis, biar engga cape ketik ulang terus
void garis(){
    cout << "----------------------------------------" << endl;
}

//ini buat ngecek kelas, dan kalau salah harus masukin deui
void cekkelas(char &kelas){
    bool oke = false; // ini dibikin salah dulu
    while (oke == false){

        if (kelas != 'W' && kelas != 'M' && kelas != 'A'){
        cout << "Masukan kelas yang valid!!" << endl
             << "Masukan Tipe Kelas : " ; cin >> kelas;
        kelas = toupper(kelas); // pake toupper uat case sensitif, jadi mau masukin a atau A, bakal sama
        oke = 0;
        } else {
            oke = 1;
        }

    }

}

//ini buat ubah kelas, yang awalnya char, jadi string ( A = archer, M = Mage)
void tampilkanstatuscard(char &kelas){
    cout << "Nama karakter : " << nama << endl 
         << "ATK : " << atk << endl 
         << "Crit rate : " << crt_r << endl
         << "crit damage : " << crt_dmg << endl;
    switch (toupper(kelas)) // pake toupper uat case sensitif, jadi mau masukin a atau A, bakal sama
    {
    case 'A':
        cout << "kelas : Archer" << endl;
        break;
    
    case 'W':
        cout << "kelas : Warrior" << endl;
        break;

    case 'M':
        cout << "kelas : Mage" << endl;
        break;
    }
    
}

//ini buat input data di awal, ini pake '&' biar ngerubah nilai aslinya
void inputdata(string &nama, int &atk, float &crt_r, float &crt_dmg, char &kelas ){
    cout << "Masukan nama karakter : " ; cin >> nama;
    cout << "Masukan ATK : " ; cin >> atk;
    cout << "Masukan Crit Rate : " ; cin >> crt_r;
    cout << "Masukan Crit Damage : " ; cin >> crt_dmg;
    cout << "Masukan Tipe Kelas : " ; cin >> kelas;
    kelas = toupper(kelas);
    cekkelas(kelas);
}

//buat ngitung crit dmg
void hitungcrtdmg(){
    if (crt_r >= 80){ //jika diatass 80
        crt_dmg *= atk;
    } else {
        switch (kelas)
        {
        case 'A':
            crt_dmg *= 1.5;
            break;
        
        case 'W':
            crt_dmg *= 2.0;
            break;

        case 'M':
            crt_dmg *= 1.5;
            break;
        }
    }
    cout << "hasil perhitungan crit damage : " << crt_dmg << endl;
}

//dimana semua fungsi2 tadi dijalankan
int main(){

    header();
    inputdata(nama, atk, crt_r, crt_dmg, kelas);
    garis();
    tampilkanstatuscard(kelas);
    garis();
    hitungcrtdmg();

    return 0;
}