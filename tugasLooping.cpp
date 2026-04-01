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
