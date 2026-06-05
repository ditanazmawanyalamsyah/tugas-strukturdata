#include<iostream>
using namespace std;

// Nested Struct
struct Tanggal {
    string hari;
    string bulan;
    int tahun;
};

struct Alamat {
    string jalan;
    string kota;
};

struct Mahasiswa {
    string nama;
    string jurusan;
    struct Tanggal masuk;
    struct Alamat tinggal;
};

int main()
{
    // Tanpa Array
//    Mahasiswa m1;
//
//    m1.nama = "Dita";
//    m1.jurusan = "Informatika";
//    m1.masuk.hari = "Senin";
//    m1.masuk.bulan = "September";
//    m1.masuk.tahun = 2024;
//    m1.tinggal.jalan = "Jl.Mawar";
//    m1.tinggal.kota = "Bandung";
//
//    cout << "=== Data Mahasiswa Tanpa Array ===" << endl;
//    cout << "Nama : " << m1.nama << endl;
//    cout << "Jurusan : " << m1.jurusan << endl;
//    cout << "Hari Masuk : " << m1.masuk.hari << endl;
//    cout << "Bulan Masuk : " << m1.masuk.bulan << endl;
//    cout << "Tahun Masuk : " << m1.masuk.tahun << endl;
//    cout << "Alamat Jalan : " << m1.tinggal.jalan << endl;
//    cout << "Alamat Kota : " << m1.tinggal.kota << endl;
//
//    cout << "\n===============================\n" << endl;

    // Dengan Array
    Mahasiswa m[2];

    for(int i = 0; i < 2; i++){
        cout << "Input Informasi Mahasiswa ke-" << i+1 << endl;

        cout << "Masukan Nama Mahasiswa : ";
        cin >> m[i].nama;

        cout << "Masukan Jurusan Mahasiswa : ";
        cin >> m[i].jurusan;

        cout << "Masukan Hari Masuk : ";
        cin >> m[i].masuk.hari;

        cout << "Masukan Bulan Masuk : ";
        cin >> m[i].masuk.bulan;

        cout << "Masukan Tahun Masuk : ";
        cin >> m[i].masuk.tahun;

        cout << "Masukan Jalan Tinggal : ";
        cin >> m[i].tinggal.jalan;

        cout << "Masukan Kota Tinggal : ";
        cin >> m[i].tinggal.kota;

        cout << endl;
    }

    cout << "\n=== Data Mahasiswa Dengan Array ===\n" << endl;

    for(int i = 0; i < 2; i++){
        cout << "Informasi Mahasiswa ke-" << i+1 << endl;
        cout << "Nama : " << m[i].nama << endl;
        cout << "Jurusan : " << m[i].jurusan << endl;
        cout << "Hari Masuk : " << m[i].masuk.hari << endl;
        cout << "Bulan Masuk : " << m[i].masuk.bulan << endl;
        cout << "Tahun Masuk : " << m[i].masuk.tahun << endl;
        cout << "Alamat Jalan : " << m[i].tinggal.jalan << endl;
        cout << "Alamat Kota : " << m[i].tinggal.kota << endl;
        cout << endl;
    }

    return 0;
}
