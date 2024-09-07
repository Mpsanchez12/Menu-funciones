#include <iostream>
using namespace std;



void usuarioyclave(){

string realusuario="Sultana";
string realclave="1234";
string usuario;
string clave;
cout<<"Ingrese su usuario"<<endl;
cin>>usuario;
cout<<"Ingrese su clave"<<endl;
cin>>clave;
if(usuario==realusuario){
cout<<"Usuario correcto"<<endl;
}
else {
cout<<"Ingresa tu usuario correctamente"<<endl;
cin>>usuario;
}
if(clave==realclave){
cout<<"Clave correcta"<<endl;
}
else{
cout<<"Ingresar clave correcta"<<endl;
cin>>clave;
}

}
void contadorinvertido(){
int comienzo;
cout<<"Ingrese el numero inicial del contador"<<endl;
cin>>comienzo;
for(int i=comienzo;i>=0;i--){
cout<<i<<endl;

}
}
void celciusafarmateneit(){
double celcius,farmatenit;
cout<<"Ingresa los grados celcius"<<endl;
cin>>celcius;
farmatenit=(celcius*9/5)+32;
cout<<"La temperatura de los grados celcius es"<<farmatenit<<endl;




}
void sumaHastaLimite() {
    int suma = 0;
    int limite;

    cout << "Ingrese el límite para la suma: ";
    cin >> limite;

    if (limite < 1) {
        cout << "El límite debe ser un número positivo mayor o igual a 1." << endl;
        return;
    }

    for (int i = 1; i <= limite; ++i) {
        suma += i;
    }

    cout << "La suma de todos los números desde 1 hasta " << limite << " es: " << suma << endl;
}







int main ()
{
    int opcion;

    do
    {
        cout<<"\n ---Menu de opciones---"<<endl;
        cout<<"1)Validar usuario y contraseña"<<endl;
        cout<<"2)Contador invertido"<<endl;
        cout<<"3)Celcius a Farmetenheit"<<endl;
        cout<<"4)Suma hasta un limite"<<endl;
        cout<<"5)Salir"<<endl;
        cout<<"Ingrese una opcion"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1: usuarioyclave();
            break;
        case 2: contadorinvertido ();
            break;
        case 3: celciusafarmateneit ();
            break;
        case 4: sumaHastaLimite();
            break;
        case 5:
            cout<<"--SALIENDO--"<<endl;

            break;
        default:
            cout<<"Opcion invalida, ingresa nuevamente"<<endl;
            break;







        }



    }
    while(opcion!=5);

    return 0;
}
