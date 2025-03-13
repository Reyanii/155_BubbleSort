#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variable global array dengan panjang 20 dengan nama arr
int n; // Deklarasi variable global n untuk menyimpam elemen pada array

void input () {
    int d;
    while (true) {
        cout << "masukan banyak elemen pada array:";
        cin >> n;
        if (n <= 20){
            break;
        }
        else {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan element array" << endl;
    cout << "====================" << endl;

    for (int i=0;i<n;i++){
        cout << "data ke-" << (i+1) << "=";
        cin >> arr[i];
    }
}

void bubbleSortArray(){
    int pass = 1; // step 1
    do {
        for (int j=0;j<=n-1-pass;j++){ // step 2
            if (arr[j] > arr[j++]) { // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1; // step 4
    }while(pass <= n+1); // STEP 5
}
void display(){
    cout << endl;
    cout << "====================" << endl;
    cout << "Element Array yang" << endl;
    cout << "====================" << endl;
    cout << endl;
    for (int j=0;j<n;j++){
        cout << arr[j];
        if (j<n-1) {
            cout << "-->";
        }
    }
}
int main (){
    input();
    bubbleSortArray();
    display();
}