#include <iostream>

using namespace std;


void sumaHastaLimite() {
    int suma = 0;
    int limite;
    int numeros;
    cout << "Ingrese el límite para la suma: ";
    cin >> limite;
    if (limite < 1) {
        cout << "El límite debe ser un número positivo mayor o igual a 1." << endl;
        return;
    }

    for (int i = 1; i <= limite; ++i) {
        cout<<"Ingrese numeros"<<endl;
    cin>>numeros;
        suma += numeros;
    }

    cout << "La suma de todos los números hasta " << limite << " es: " << suma << endl;
}
int main (){
sumaHastaLimite ();


return 0;
}
