#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		int notas;
		int a,b,c = 0;
		ofstream notas2;
	string contacto;
	string usuario;
		cin>>usuario;
	char letrica = 205;
	char letrica2 = 186;
	int x = 0;
	int numero = 0;
	int fin = 0;
	while (fin == 0){
		numero = 0;
	    	cout<<"                                ";
	while (numero < 50){
		cout<<letrica;
		numero = numero + 1;
	}
	numero = 0;
	cout<<"\n                                    "<<letrica2<<"        BIENVENIDO "<<usuario<<"                    "<<letrica2;
	cout<<"\n                                    "<<letrica2<<"        Seleccione una opcion:              "<<letrica2;
	cout<<"\n                                    "<<letrica2<<"1. Guardar Contacto                         "<<letrica2;
	cout<<"\n                                    "<<letrica2<<"2. Abrir Año Bisiesto                       "<<letrica2;
	cout<<"\n                                    "<<letrica2<<"3. Abrir Calculadora                        "<<letrica2;
	cout<<"\n                                    "<<letrica2<<"4. Notas                                    "<<letrica2;
	cout<<"\n                                    "<<letrica2<<"5. Salir                                    "<<letrica2;
	cout<<"\n                                    ";
	numero = 0;
	while (numero < 0){  
		cout<<letrica;
		numero = numero + 1;
		}
		cout<<"\n";
	   	cin>>x;
	   	switch(x){
		case 1:
			cout<<"Guardar contacto\n ";
			cout<<"Digite el contaco que quiere guardar\n ";
			cin>>contacto;	
			break;
		
		
		
		
		
		case 2:
			cout<<" Bienvenido a Calcular año Bisiesto \n ";
			
			using namespace std;
{
      int c;
      cout<<"Ingrese para saber si es bisiesto"<<endl;
      cin>>c;
     if(c % 4 == 0 & (c = 100 != 0)){
         cout<<"la fecha "<<a<<" Si es bisiesto ";
     }else{
         cout<<"la fecha"<<a<<" No es bisiesto ";
     }
      return 0;
}
			
				break;
	
	
	
	
	
		case 3:
			cout<<"Bienvenido a Calculadora\n ";
				cout <<"Digite el primer numero\n";
		cin>>a;
		cout<<"Digite el segundo numero\n";
		cin>>b;
		c = a + b;
		cout<<"\nLa suma es: "<<c;
		c= a * b;
		cout<<"\nLa multiplicacion es: "<<c;
		c = a - b;
		cout<<"\nLa resta es: " <<c;
		if ( b == 0){
		cout<< "\no se puede dividir en 0";
		c = a * b;
		}else
		cout<< "\nLa division es:" << c;
		
			break;
			
		case 4:
			cout<<"Bienvenido a Notas\n ";
				cout<<"Escriba sus notas\n ";
		cin>>notas;
		notas2.open("notasss.txt");
		notas2<<"Sus notas son: "<<notas;
			notas2.close();
			
			break;
		case 5:
			fin = 1;
			
			break;
			}
			
		}
		
		return 0;
		
		}
			
			
			
			
			
			
			
			
			
			
			
