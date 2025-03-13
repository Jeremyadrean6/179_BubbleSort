#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global array dengan panjang 20
int n; // Deklarasi variabel global n untuk menyimpan elemen pada array


void input(){ // prosedur input
    int d;
    while (true){
        cout << "Masukan banyaknya elemen pada array: ";
        cin >> n;
            if (n <= 20){
            break;
        }
        else {
            cout << "\nArray maksimal20 elemen.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i=0;i<n;i++){
        cout << "Data ke-" << (i+1) << " = ";
        cin >> arr[i];
    }
}

void BubbleSortArray(){
    int pass = 1; // step 1
    do {
        for (int j=0;j<=n-1-pass;j++){ //step 2
            if (arr[j] > arr[j+1]) { //step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1; // step 4
    }while(pass<= n-1); //step 5
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j=0;j<n;j++){
        cout << arr[j];
        if (j<n-1) {
            cout << " --> ";
        }
    }

}

int main(){
    input();
   
}