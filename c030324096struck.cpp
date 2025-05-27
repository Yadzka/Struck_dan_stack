#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[])
{
    mahasiswa yadzka;
    mahasiswa *ptryadzka = &yadzka;

    cout << "Isikan Data Anda: \n";
    cout << "NIM : ";
    cin >> ptryadzka->nim;
    cout << "Nama : ";
    cin >> ptryadzka->nama;
    cout << "Alamat : ";
    cin >> ptryadzka->alamat;
    cout << "IPK : ";
    cin >> ptryadzka->ipk;
    system("cls");
    cout << "Data Anda: \n";
    cout << "NIM = " << ptryadzka->nim << "\n";
    cout << "Nama = " << ptryadzka->nama << "\n";
    cout << "Alamat = " << ptryadzka->alamat << "\n";
    cout << "IPK = " << ptryadzka->ipk << "\n";
    return 0;
}
