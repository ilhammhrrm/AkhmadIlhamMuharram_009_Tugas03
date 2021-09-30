#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int nilai,nik,jenis,status,kendaraan,gajipokok,uang,gajikotor,tunjangan,pajak,gajibersih,transport;
    char nama[20];
        cout << "Nama Karyawan = "; gets(nama);
        cout << "NIK = "; cin >> nik;
        cout << "permepuan = 0, laki laki = 1" <<endl;
        cout << "jenis kelamin = "; cin >> jenis;
        cout << "single = 0, menikah =1" <<endl;
        cout << "status pernikahan = "; cin >> status;
        cout << "motor = 0, mobil = 1" <<endl;
        cout << "kendaraan = "; cin >> kendaraan;
        cout << "gaji pokok = "; cin >> gajipokok;
        cout << "uang makan = "; cin >> uang;
        //tunjangan
            if (jenis==1 && status==1)
            {
                tunjangan = 500;
                cout << "\ntunjangan = 500";
            }
            else
            {
                tunjangan = 0;
                cout << "\ntunjangan = 0";
            }
        //transport
            if (kendaraan==1)
            {
                transport = 1000;
                cout << "\ntransport = 1000";
            }
            else if (kendaraan==0)
            {
                transport = 500;
                cout << "\ntransport = 500";
            }
            else
            {transport = 0;}
        //gaji kotor
            gajikotor=gajipokok+tunjangan;
            cout << "\ngaji kotor = "<<gajikotor;
        //pajak
            pajak=0.05*gajikotor;
            cout << "\npajak = "<<pajak;
        //gaji bersih
            gajibersih=gajikotor-pajak;
            cout << "\ngaji bersih = "<<gajibersih;
    getch();
}
