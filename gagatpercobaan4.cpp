#include <iostream>
using namespace std;

int nTelor, nMie, nAir;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "Masukan Nama = ";
    cin >> nama;
    cout << "Masukan Jumlah Telor = ";
    cin >> nTelor;
    cout << "Masukkan Jumlah Mie = ";
    cin >> nMie;
    cout << "Masukkan Jumlah Air Mineral = ";
    cin >> nAir;
}

int hitungHarga()
{
    return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display()
{
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telor = " << nTelor << endl;
    cout << "JUmlah Mie = " << nMie << endl;
    cout << "Total Harga rp." << hitungHarga() << endl;
}

int main()
{
    char pilihan;
    do
    {
        input();
        display();

        cout << "Apakah anda ingin mengulangi (y/n) ? ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y'); 
}