//float, int, char
#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukkan Bilangan Kedua = ";
    cin >> bilDua;
}

float penjumlahan(float a, float b)
{
    return a + b;

//int
    int main() {
        Mahasiswa mhs;
        cout << "Nomor Mahasiswa : ";
        cin >> mhs.nim;
        cout << "Nama Mahasiswa : ";
        cin >> mhs.nama;
        cout << "Alamat Mahasiswa : ";
        cin >> mhs.alamat;
        cout << "Umur Mahasiswa : ";
        cin >> mhs.umur;

        cout << endl;
        cout << "\n NIM : " << mhs.nim;
        cout << "\n Nama : " << mhs.nama;
        cout << "\n Alamat : " << mhs.alamat;
        cout << "\n Umur : " << mhs.umur;

    }

//char
#include <iostream>
using namespace std;

int main() {
    char pilihan;

    do {
        cout << "Berangkat Belanja" << endl;
        cout << "Antri Belanja" << endl;
        cout << "Ambil Belanja" << endl;
        cout << "Apakah mau belanja kembali ?" << endl;
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
}
//conditionalstatement
int TotalHarga() {
    return (nXbeat * hXbeat) + (nMio * hMio) + (nScoopy * hScoopy) + (nVario * hVario) + (nNmax * hNmax);
}

//struct
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
};

//prosedurdanfungsi
#include <iostream>
using namespace std;

string nama;
int nXbeat, nMio, nScoopy, nVario, nNmax;
int hXbeat = 30, hMio = 80, hScoopy= 25, hVario = 20, hNmax = 6000;

int input() {
    cout << "Nama Pembeli : ";
    cin >> nama;
    cout << "Jumlah Xbeat:";
    cin >> nXbeat;

    cout << "Jumlah Mio :";
    cin >> nMio;

    cout << "Jumlah Scoopy";
    cin >> nScoopy;

    cout << "Jumlah Vario";
    cin >> nVario;

    cout << "Jumlah Nmax";
    cin >> nNmax;
}

int TotalHarga() {
    return (nXbeat * hXbeat) + (nMio * hMio) + (nScoopy * hScoopy) + (nVario * hVario) + (nNmax * hNmax);
}

void Display() {
    cout << "Total Harganya :" << TotalHarga() << endl;
}

int main() {
    char pilihan;
    do {
        input();
        Display();
        cout << "Apakah ingin membeli kembali ? ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
}
//looping
for (int i = 0; i < n; i++)

//penerimaan mahasiswa baru
#include <iostream>
    using namespace std;

string nama;
int Nama;
int Status;

void inputMahasiswa(){
    string Mahasiswa;
    int Status;



