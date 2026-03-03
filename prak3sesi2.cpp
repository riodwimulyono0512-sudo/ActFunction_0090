//library
#include<iostream>
using namespace std;
//deklarasi global
    float p,l;

//Implementasi Prosedur & Fungsi
    void Input(){
        cout << "Masukkin Panjang : " ;
        cin >> p;
        cout << "Masukkin Lebar : " ;
        cin >> l;
    }

    float LuasPersegi(){
        return p*l;
    }

    void Output (){
        cout << "Hasilnya = " << LuasPersegi();
    }
//Program Utama
int main()
{//start
    Input();
    Output();
}//selesai
