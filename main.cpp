#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){

    Arreglo<string> arreglo;

    arreglo.insertar_inicio("Alan");
    arreglo.insertar_inicio("Cas");
    arreglo.insertar_final("Ascencio");
    arreglo.insertar_final("Batman");

    for (size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.insertar("Abduzkan",2);

    for (size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();

    arreglo.eliminar(1);

    for (size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
