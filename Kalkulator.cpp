#include <iostream>
using namespace std;

int bilA, bilB;

void input() {
    cout << "Masukan Bilangan Pertama = ";
    cin >> bilA;
    cout << "Masukan Bilangan Kedua = ";
    cin >> bilB;

}

int pemjumlahan(int a, int b) {
    return a + b;
}

int pengurangan(int a, int b) {
    return a - b;
}

int perkalian(int a, int b) {
    return a * b;
}

int pembagian(int a, int b) {
    return a / b;
}


int main() {

    int pilihan;
    do
    {
        cout << "Kalkulator Sederhana" << endl;
        cout << "======================" << endl;
        cout << "1. Pemjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "======================" << endl;
        cout << "Masukan menu pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            
        }
        
    } while (
        
    );
    
}