#include <iostream>

using namespace std;

void input(int &tinggi){
    do {
        cout << "masukan tinggi piramida (0 untuk keluar)" << endl;
        cout << "-";
        cin >> tinggi;
        for (int i = 1 ; i <= tinggi ; i++){
            for (int j = tinggi ; j > i ; j--){
                cout << "  ";
            }
            for (int k = 0 ; k < i*2-1 ; k++){
                cout << "* ";
            }
            cout << endl;
        }
    } while (tinggi > 0);

    cout << "keluar.";
}

int main(int tinggi){
    input(tinggi);
    return 0;
}