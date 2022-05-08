// Nama        : Syahrul Fathoni Ahmad
// NRP         : 5024211007
// Departemen  : Teknik Komputer
// Kelas       : Pemrograman Lanjut A

#include <iostream>
#include "include/Persegi_Panjang.hpp"

using namespace std;

void enterButton(){
    cout<<"\nKLIK TOMBOL ENTER UNTUK MELANJUTKAN PROGRAM :)"<<endl;
    cin.ignore();
}
void clearBoard(){
    system("CLS||CLEAR");
}

int main()
{
    clearBoard();
    cout << "SELAMAT DATANG DI OVERLOADING PERSEGI PANJANG" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "\nTEKAN ENTER JIKA MAU TAHU IDENTITAS SAYA" << endl;
    cin.ignore(); clearBoard();
    cout << "Nama       : Syahrul Fathoni Ahmad" << endl;
    cout << "Nrp        : 5024211007" << endl;
    cout << "Kelas      : Pemrograman Lanjut (A)"<< endl;
    enterButton(); clearBoard();
    cout << "OPERATOR OVERLOADING PERSEGI PANJANG" << endl;
    cout << "************************************" << endl;

    float panjang,lebar,x_mid,y_mid;
    cout << "Input Atribut Persegi Panjang (1) : \n" << endl;
    cout << "Panjang : ";
    cin >> panjang;
    cout << "Lebar : ";
    cin >> lebar;
    cout << "Titik Tengah (x) : ";
    cin >> x_mid;
    cout << "Titik Tengah (y) : ";
    cin >> y_mid;
    PersegiPanjang B1(x_mid, y_mid, panjang, lebar);
    
    clearBoard();
    cout << "Input Atribut Persegi Panjang (2) : \n" << endl;
    cout << "Panjang : ";
    cin >> panjang;
    cout << "Lebar : ";
    cin >> lebar;
    cout << "Titik Tengah (x) : ";
    cin >> x_mid;
    cout << "Titik Tengah (y) : ";
    cin >> y_mid;
    PersegiPanjang B2(x_mid, y_mid, panjang, lebar);

    enterButton(); clearBoard();
    cout << "Atribut Persegi Panjang (1)" << endl;
    B1.printHasil();
    cout << "Atribut Persegi Panjang (2)" << endl;
    B2.printHasil();
    
    enterButton(); clearBoard();
    PersegiPanjang B3, B4, temp, wr;
    int pilih; 
    while(1)
    {
        cout << "Menu Operator Overloading Persegi Panjang" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "1. Operator +" << endl;
        cout << "2. Operator -" << endl;
        cout << "3. Operator ++" << endl;
        cout << "4. Operator --" << endl;
        cout << "5. Operator []" << endl;
        cout << "6. Operator ==" << endl;
        cout << "99. Exit" << endl;
        cout << "[]===[]===> Ketik Angka dari Operasi Yang Anda Inginkan ";
        cin >> pilih;

        switch (pilih)
        {
            case 1:{
                if (B1==B2)
                {
                    clearBoard();
                    cout << "Atribut Persegi Panjang (1)" << endl;
                    B1.printHasil();
                    cout << "Atribut Persegi Panjang (2)" << endl;
                    B2.printHasil();
                    B3=B1+B2;
                    B3.printHasil();
                    enterButton(); cin.ignore(); clearBoard();
                    break;
                }
                else {
                    wr.wrongResult(); cin.ignore(); cin.ignore();
                    return 0;
                }
            }
            case 2:{
                if (B1==B2)
                {
                    clearBoard();
                    cout << "Atribut Persegi Panjang (1)" << endl;
                    B1.printHasil();
                    cout << "Atribut Persegi Panjang (2)" << endl;
                    B2.printHasil();
                    B3=B1-B2;
                    B3.printHasil();
                    enterButton(); cin.ignore(); clearBoard();
                    break;
                }
                else{
                    wr.wrongResult(); cin.ignore(); cin.ignore();
                    return 0;
                }
            }
            case 3:{
                clearBoard();
                ++B1;
                cout << "=============================================" <<endl;
                cout << "Berikut Penambahan Luasan Persegi Panjang (1)" << endl;
                cout << "=============================================" << endl;
                B1.printHasil();
                --B1;
                enterButton(); cin.ignore(); clearBoard();

                ++B2;
                cout << "=============================================" <<endl;
                cout << "Berikut Penambahan Luasan Persegi Panjang (2)" << endl;
                cout << "=============================================" << endl;
                B2.printHasil();
                --B2;
                enterButton(); clearBoard();
                break;
            }
            case 4:{
                clearBoard();
                --B1;
                cout << "=============================================" <<endl;
                cout << "Berikut Pengurangan Luasan Persegi Panjang (1)" << endl;
                cout << "=============================================" << endl;
                B1.printHasil();
                ++B1;
                enterButton(); cin.ignore(); clearBoard();

                --B2;
                cout << "=============================================" <<endl;
                cout << "Berikut Pegurangan Luasan Persegi Panjang (2)" << endl;
                cout << "=============================================" << endl;
                B2.printHasil();
                ++B2;
                enterButton(); clearBoard();
                break;
            }
            case 5:{
                clearBoard();
                cout << "==================================================" << endl;
                cout << "Berikut Nilai Koordinat dari Kedua Persegi Panjang" << endl;
                cout << "==================================================" << endl << endl;

                cout << "Koordinat Persegi Panjang (1)" << endl;
                cout << "X-Min : " << B1[1] << endl;
                cout << "X-Max : " << B1[2] << endl;
                cout << "Y-Min : " << B1[3] << endl;
                cout << "Y-Max : " << B1[4] << endl << endl;
                
                cout << "Koordinat Persegi Panjang (2)" << endl;
                cout << "X-Min : " << B2[1] << endl;
                cout << "X-Max : " << B2[2] << endl;
                cout << "Y-Min : " << B2[3] << endl;
                cout << "Y-Max : " << B2[4] << endl;

                enterButton(); cin.ignore(); clearBoard();
                break;
            }
            case 6:{
                clearBoard();
                if (B1==B2)
                {
                    cout << "Kedua Persegi Panjang Saling Beririsan" << endl;
                    enterButton(); cin.ignore(); clearBoard();
                    break;
                }
                else {
                    wr.wrongResult(); 
                    cin.ignore(); cin.ignore();
                    return 0;
                }
            }
            case 99:{
                clearBoard();
                return 0;
            }
            default:
                cout << "\nMenu Yang Anda Masukkan Salah" << endl;
                cin.ignore(); enterButton(); clearBoard(); 
                break;
        }
    }
}

