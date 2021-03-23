#include <iostream>
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {


char tamalito=205;
char tamalito2=186;
ofstream dato;
ofstream dato2;
string nombre;
int numero;
int air=0;
int no=0;
int opt;
string direccion, pais, ciudad; 
ofstream proyecto;
ofstream casilla;
cout<<"          ";
while (numero < 50) {




cout<<tamalito;
numero=numero+1;


}

numero=0;
cout<<"\n                 "<<tamalito2<<"                   BIENVENIDO                  "<<tamalito2;

cout<<"\n                 "<<tamalito2<<"1.Pais                                         "<<tamalito2;

cout<<"\n                 "<<tamalito2<<"2.Direccion                                    "<<tamalito2;

cout<<"\n                 "<<tamalito2<<"3.Ciudad                                       "<<tamalito2;

cout<<"\n                 "<<tamalito2<<"4.Contactos                                    "<<tamalito2;

cout<<"\n                 "<<tamalito2<<"5.Cerrar                                       "<<tamalito2;


cout<<"\n         ";

while(numero < 50){

cin>> air;
switch(air){
   case 1:
   		
	  	cout<<"selecciono la opcion 1";
	  	cout<<"escriba su pais:\n";
	    cin>>pais;
	    casilla.open("correo.txt");
	    casilla<<"su pais es: "<<pais;
	    casilla.close();
	break;
     
	  
	case 2:
	    cout<<"selecciono la opcion 2";
	    cout<<"escriba su direccion:\n";
	    cin>>direccion;
	    casilla.open("correo.txt");
	    casilla<<"su direccion es: "<<direccion;
	    casilla.close();
	break;
	case 3:
	    cout<<"selecciono la opcion 3";
	    cout<<"escriba su ciudad:\n";
	    cin>>ciudad;
	    casilla.open("correo.txt");
	    casilla<<"su ciudad es: "<<ciudad;
	    casilla.close();
	break;


case 4:

	cout<<"Escriba su nombre:\n";
	cin>>nombre;
	cout<<"Escriba su numero contacto:\n";
	cin>>numero;
	dato.open("nombre.txt");
	dato2.open("numero.txt");
	dato<<"su nombre es:"<<nombre;
	dato2<<"su numero es:"<<numero;
	dato.close();
	dato2.close();

	system("pause");
  
   break;


case 5:

   no=1;
   break;


    
    
}

}
return 0;
}
