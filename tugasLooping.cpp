#include <iostream>
using namespace std;

// Deklarasi variabel global
int n;
int pilihan;

// Membuat fungsi untuk menampilkan menu
void menu() {
    cout << "Pilih Menu" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

// prosedur input angka
void input() {
    cout << "Masukkan angka: ";
    cin >> n;
}

// Membuat fungsi untuk mengecek bilangan prima

bool cekPrima(int n){
    if (n <= 1) 
    return false;
    
    int i = 2;
    while (i < n) {

        if (n % i == 0 )
        return false;
        i++;
    }
    return true;
}

bool cekFibonacci(int n){
    int a = 0, b = 1, c = 0;
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    if ( n == 0 || n == b)
        return true;
    else
        return false;
}

void hasilPrima() {
    input();

    if (cekPrima(n))
        cout << "Angka Anda Adalah Bilangan Prima"<< endl;
    else
        cout << "Angka Anda Bukan Bilangan Prima"<< endl;
}

void hasilFibonacci() {
    input();

    if (cekFibonacci(n))
        cout << "Angka Anda Adalah Bilangan Fibonacci"<< endl;
    else
        cout << "Angka Anda Bukan Bilangan Fibonacci\n";
}

int main() {

    while (true) {
        menu();

        switch (pilihan) {

        case 1:
            hasilPrima();
            break;

        case 2:
            hasilFibonacci();
            break;

        case 0:
            cout << "Program selesai\n";
            return 0;

        default:
            cout << "Pilihan tidak valid\n";
        }
    }

    return 0;
}