#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi array global dengan ukuran 20
int n; //Deklarasi variabel n dengan tipe data integer

void input(){ //Prosedutr input
    int d;
    while (true){
        cout << "Mau barapa elemen pada array? : ";
        cin >> n;
        if (n<=20)
            break;
        else{
            cout << "\nTerlalu banyak, maksimal 20 saja\n";}

    }
    
cout << endl;
cout << "======================" << endl;
cout << "Masukkan elemen array" << endl;
cout << "======================" << endl;

for (int i=0; i<n; i++){
    cout << "Data ke-" << (i+1) << ": ";
    cin >> arr[i];}

}

