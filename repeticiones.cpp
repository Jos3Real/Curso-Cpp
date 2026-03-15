#include <iostream>
using namespace std;

/*
int main () {

    for(int i = 1; i <= 5; i=i+2){
        cout << i << endl;
    }

    return 0;
} */

/*
int main (){

    int num;
    int suma = 0;

    for(int i = 1; i <= 5; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        suma += num;
    }

    cout << "\n##### Salida #####" << endl;
    cout << "La suma es: " << suma << endl;

    return 0;
} */

/*
int main (){

    int num;
    int suma = 0;

    for(int i = 1; i <= 5; i++){
        cout << "Ingrese un numero: ";
        cin >> num;

        suma += num;
    }

    cout << "\n##### Salida #####" << endl;
    cout << "La suma es: " << suma << endl;

    return 0;
}
*/

int main() {

    int num = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    for(int i = 1; i <= 10; i++){

        cout << num << " x " << i << " = " << num * i << endl;

    }

    return 0;
}