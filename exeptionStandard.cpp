#include <iostream>
#include <exception>
// untuk obyek exeption yang akan digunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main(){
    cout << "Awal Program" << endl; // Penanda 1:...
    try {
        array<int, 3> data = { 10, 20, 30 };
        // Pesan array integar 3 elemen
        cout<<data.at(5)<<endl;
        // Memanggil array elemen 5
    }
    catch (exception& e) {
        // Penangkap menggunakanobyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program yang terakhir" << endl;
    /*Penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}