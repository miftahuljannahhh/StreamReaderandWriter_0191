#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Selamat belajar di Prodi TI UMY" << endl;
        throw 3.5; //melemparkan sebuah integar maka
        cout << "Pernytaan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok iniakan dieksekusi
        cout << a << " : Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integar maka block ini akan dieksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }
}