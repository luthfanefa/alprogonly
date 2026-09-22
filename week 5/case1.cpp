#include <iostream>

using namespace std;

string nama;
int atk;
float crt_r, crt_dmg;
char kelas;

void header(){
    cout << "+--------------------------------------+" << endl
         << "| hai pengguna, masukan data karakter! |" << endl
         << "+--------------------------------------+" << endl;
}
void garis(){
    cout << "----------------------------------------" << endl;
}
void cekkelas(char &kelas){
    bool oke = false;
    while (oke == false){

        if (kelas != 'W' && kelas != 'M' && kelas != 'A'){
        cout << "Masukan kelas yang valid!!" << endl
             << "Masukan Tipe Kelas : " ; cin >> kelas;
        kelas = toupper(kelas);
        oke = 0;
        } else {
            oke = 1;
        }

    }

}
void inputdata(string &nama, int &atk, float &crt_r, float &crt_dmg, char &kelas ){
    cout << "Masukan nama karakter : " ; cin >> nama;
    cout << "Masukan ATK : " ; cin >> atk;
    cout << "Masukan Crit Rate : " ; cin >> crt_r;
    cout << "Masukan Crit Damage : " ; cin >> crt_dmg;
    cout << "Masukan Tipe Kelas : " ; cin >> kelas;
    kelas = toupper(kelas);
    cekkelas(kelas);
}
int main(){

    header();
    inputdata(nama, atk, crt_r, crt_dmg, kelas);

    return 0;
}