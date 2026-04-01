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

// Fungsi input angka
void input() {
    cout << "Masukkan angka: ";
    cin >> n;
}

// Membuat fungsi untuk mengecek bilangan prima
bool cekPrima(int n){
    // mengecek apakah angka kurang dari atau sama dengan 1
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
