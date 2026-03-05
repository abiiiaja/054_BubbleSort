#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi array global dengan ukuran 20
int n; //Deklarasi variabel n dengan tipe data integer

void input(){
    int d;
    while (true){
        cout << "Mau barapa elemen pada array? : ";
        cin >> n;
        if (n<=20)
            break;
        else
            cout << "\nTerlalu banyak, maksimal 20 saja\n";

    }
}

