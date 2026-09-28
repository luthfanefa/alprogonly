#include <iostream>

using namespace std;

void prima (const int &jum){
    int checkpoint = 2;
    for (int i = 0 ; i < jum ; i ++){  
        for (int j = checkpoint ; j != 0 ; j ++){
            if (j == 2){
                cout << j << " ";
                checkpoint = j+1;
                break;
            }
            if (j > 2){
                bool benar = 1 ;
                for (int k = 2 ; k < j ; k++){
                    if (j % k == 0 ){
                        benar = 0 ;
                        break;
                    } 
                }
                if (benar == 1){

                    cout << j << " ";
                    checkpoint = j+1;
                    break;

                }
            }
         
        }
    }

}

int main(){
    int n;
    cout << "masukan berapa bil prima yang diinginkan : " ; cin >> n;
    prima (n);
    return 0;
}