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
    yadzka.nim = "C030324096";
    yadzka.nama = "Muhammad Yadzka";
    yadzka.alamat = "Jl. Gerilya";
    yadzka.ipk = 4;

    cout << "Data Anda: \n";
    cout << "NIM: " << yadzka.nim << "\n";
    cout << "Nama: " << yadzka.nama << "\n";
    cout << "Alamat: " << yadzka.alamat << "\n";
    cout << "IPK: " << yadzka.ipk << "\n";
    return 0;
}
