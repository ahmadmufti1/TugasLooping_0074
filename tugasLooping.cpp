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

    // mendeklrasikan variabel i untuk melakukan perulangan mulai dari angka 2 hingga n-1
    int i = 2;
    while (i < n) { // melakukan perulangan selama i kurang dari n
        //melakukan perulangan untuk mengecek apakah angka habis dibagi oleh angka lain selain 1 dan dirinya sendiri dan jika habis dibagi maka angka tersebut bukan bilangan prima
        if (n % i == 0 ) 
        return false;
        i++;
    }
    return true;
}

// Membuat fungsi untuk mengecek bilangan fibonacci
bool cekFibonacci(int n){  // mendeklrasikan variabel a, b, dan c untuk menyimpan nilai dari bilangan fibonacci
    int a = 0, b = 1, c = 0; 
    while (c < n) { // melakukan perulangan selama nilai c kurang dari n
        c = a + b; // menghitung nilai c dengan menjumlahkan nilai a dan b
        a = b; // menyimpan nilai b ke dalam variabel a
        b = c; // menyimpan nilai c ke dalam variabel b
    }
    // mengecek apakah nilai c sama dengan n atau nilai b sama dengan n, jika salah satu dari kondisi tersebut benar maka angka tersebut adalah bilangan fibonacci
    if ( n == 0 || n == b)
        return true;
    else
        return false;
}

// Membuat fungsi untuk menampilkan hasil cek bilangan prima
void hasilPrima() {
    input(); // memanggil fungsi input untuk memasukkan angka

    // memanggil fungsi cekPrima untuk mengecek apakah angka yang dimasukkan adalah bilangan prima atau bukan, jika benar maka akan menampilkan pesan bahwa angka tersebut adalah bilangan prima, jika
    if (cekPrima(n))
        cout << "Angka Anda Adalah Bilangan Prima"<< endl;
    else
        cout << "Angka Anda Bukan Bilangan Prima"<< endl;
}

