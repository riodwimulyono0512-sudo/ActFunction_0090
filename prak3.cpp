#include<iostream>
using namespace std;

float a,t;

void input(){
    cout << "Masukkan alas : " ;
    cin >> a;
    cout << "Masukkan Tinggi : " ;
    cin >> t;

}

float LuasSegitiga(){
    //return a*t*0.5;
    return (a*t*0.5);
}

void Output (){
    cout << "Hasilnya = " << LuasSegitiga();
}

int main()
{
    input();
    Output();
}