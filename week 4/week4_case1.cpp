#include <iostream>

using namespace std;

int main() {

    int murid = 1, a, b;
    bool ketemu = false;

    while (ketemu == false){
        cout << "-----(murid " << murid << ")-----" << endl << endl ;
        cout << "Masukan nilai ujian A: ";
        cin >> a ;
        if (a == 100){
            cout << "Perwakilan Ditemukan!" << endl;
            ketemu = 1;
        } else if (a < 100 && a >= 80){
            cout << "Masukan nilai ujian B: ";
            cin >> b;
            if (b > 90){
                cout << "Perwakilan Ditemukan!" << endl;
                ketemu = 1;
            } else {
                cout << "Murid dilewati." << endl;
            }
        }else { 
            cout << "Murid dilewati." << endl;
        }
        murid++;
        cout << endl;
        if (murid == 6)
        {
            cout << "---------------------" << endl
                 << "SEKOLAH JELEK";
            break;
        }
        
    }
    cin >> murid;
    return 0;
}