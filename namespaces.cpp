// Uso de los Namespaces

#include <iostream>

namespace primero {
    int x = 1;
}

namespace segundo {
    int x = 2;
}

int main () {

    using std:: cout;
    using std:: string;

    int x = 0;

    /* using namespace primero; */ // llama a escena el valor que se asigna a X en el namespaces primero para asignarle un valor a X si no lo tiene

    cout << "X = " << x;
    /* std:: cout << "X = " << primero::x; */ // Imprime el valor de X asignado en el namespaces primero
    /* std:: cout << "X = " << segundo::x; */ // Imprime el valor de X asignado en el namespaces segundo

    string nombre = "Jose";
    cout << nombre;

    return 0;
}