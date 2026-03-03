//library
#include<iostream>
using namespace std;

//Add function untuk menghitung
float HitungLuas(float a, float t){
    return 0.5*a*t;
}

//Implementasi input function
void input(){
    double a, t, luas;
 
    cout << "Masukkan alas : " ;
    cin >> a;

    cout << "Masukkan tinggi : " ;
    cin >> t;
    
    luas = HitungLuas(a, t);

    cout << "Luas segitiga = " << luas << endl;
}

//Add main function to execute input
int main() {
    input();
    return 0;
}