#include <iostream>

using namespace std;

int main (){

    cout << "PROGRAM MENENTUKAN NILAI TERTINGGI DALAM ARRAY" << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;

    int nilai, nilaiTertinggi, indeksTertinggi, jumlah;
    cout << "Masukkan banyaknya indeks data dalam Array : " ;
    cin >> jumlah;
    cout << endl;

    int Array[jumlah];
    for (int n =0; n < jumlah; n++){
        cout << "Masukkan nilai pada indeks ke - " << n << " : " ;
        cin >> nilai;
        Array[n]=nilai;
        cout << endl;
    }

    for (int i = 0; i < jumlah; i++){
        if( nilaiTertinggi < Array[i]){
            nilaiTertinggi = Array[i];
            indeksTertinggi = i;
        }
    }

    cout << "Nilai Tertinggi terdapat di = " << nilaiTertinggi << endl;
    cout << "Indeks ke - " << indeksTertinggi;
    cout << endl;
    return 0;
}
