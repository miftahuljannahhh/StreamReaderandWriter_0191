#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // membuat objek output file stream.
    ofstream outfile;
    //membuka file untuk ditulisi.
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis 
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dala file 
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //Membuat objek input file stream
    ifstream infile;
    //Membuka file yang dituliskan
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file " << endl;
    // Jika file ada maka
    if (infile.is_open())
    {
        // Melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini
            cout << baris << '\n';
        }
        // Tutup file tersebut setelah selesai
        infile.close();
    }
    // Jika tidak ditemukan file maka akan akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}
    