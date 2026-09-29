#include <iostream>

using namespace std;

int zombie(int hari){

    if (hari == 0) {
        return 10;
    }
    if (hari % 2 == 1){
        return 2 * zombie(hari-1) - 5;
    } else {
        return zombie(hari-1) + 10;
    }
}
int main(){
    int t1, t2 ;
    cout << "masukan tanggal prediksi pertama : " ; cin >> t1;
    int hasil1 = zombie(t1);
    cout << "masukan tanggal prediksi kedua : " ; cin >> t2;
    int hasil2 = zombie(t2);
    cout << "Hasil prediksi jumlah zombie pada tanggal " << t1 << " dan tanggal " << t2 << " adalah : " << hasil1+hasil2; 
    return 0;
}