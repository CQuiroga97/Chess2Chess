#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <fstream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

		string palabrita;
		cin>>palabrita;
		char letrica = 205;
		char letrica2 = 186;
		int tareas=0;
		int tamalito = 0;
		int numero = 0;
		int nubecita = 0;
		int asd = 0;
		while(nubecita == 0){
			numero = 0;
			cout<<"                      ";
		while(numero < 50){
			
			cout<<letrica;
			numero = numero + 1;
			
		}
		
		numero = 0;
		cout<<"\n                                     BIENVENIDO "<<palabrita<<"                     ";
		cout<<"\n                        "<<letrica2<<"       Seleccione una opcion:                     "<<letrica2;
		cout<<"\n                        "<<letrica2<<"1. Calculadora                                    "<<letrica2;
		cout<<"\n                        "<<letrica2<<"2. notas y promedio                               "<<letrica2;
		cout<<"\n                        "<<letrica2<<"3. tareas                                         "<<letrica2;
		cout<<"\n                        "<<letrica2<<"4. fin                                            "<<letrica2;
		cout<<"\n                        ";
		while(numero < 50){
			
			cout<<letrica;
			numero = numero + 1;
			
		}
		cout<<"\n";
		cin>>tamalito;
		switch(tamalito){
		
		case 1:
			cout<<"\nBienvenido a la calculadora!";
			
	cout<<" Bienvenido!\n";
	cout<<" Para sumar presione el numero 6\n";
	cout<<" Para restar presione el numero 7\n";
	cout<<" Para multiplicar presione el numero 8\n";
	cout<<" Para dividir presione el numero 9\n";
	cout<<" Para buscar la raiz presione el numero 10\n";
	cout<<" Para buscar el numero factorial presione el numero 11\n";
	cin>>asd;

	switch(asd){

		case 6:
			//funcion de sumar
			int a;
			int b;
			 cout<<"ingrese el primer numero\n";
			 cin>>a;
			 cout<<"ingrese el segundo numero\n";
			 cin>>b;
			 cout<<"el resultado es: "<<a+b;
			break;
		case 7:
			//funcion de restar
			int c;
			int d;
			 cout<<"ingrese el primer numero\n";
			 cin>>c;
			 cout<<"ingrese el segundo numero\n";
			 cin>>d;
			 cout<<"el resultado es: "<<c-d;
			 break;
	    case 8:
			//funcion de multiplicar
	    	int e;
			int f;
			 cout<<"ingrese el primer numero\n";
			 cin>>e;
			 cout<<"ingrese el segundo numero\n";
			 cin>>f;
			 cout<<"el resultado es: "<<e*f;
			 break;
		case 9:
			//funcion de division
			int g;
			int h;
			 cout<<"ingrese el primer numero\n";
			 cin>>g;
			 cout<<"ingrese el segundo numero\n";
			 cin>>h;
			 cout<<"el resultado es: "<<g/h;
			 break;
		case 10:
			//funcion de la raiz
			 int x;
			 cout<<"ingrese el numero al que quiera sacar raiz\n";
			 cin>>x;
			 cout<<"el resultado es: "<<sqrt (x);
			 break;
		case 11:
			//funcion de la factorial
			 int num1 = 0;
			 int res = 1;
			 int num2 = 0;
			 cout<<"Vamos a buscar el factorial de un numero, por favor digitelo:\n";
			 cin >>num2;
			 while(num1 < num2){

				num1 = num1 + 1;
				res = num1 * res;

			}
			 cout<<"el factorial es: " << res;
			 break;

  	}
cout<<"\n\n",
	system("pause");
	//terminar la funcion
			
			
		case 2:
			cout<<"\nnotas y promedio";
			int NOTA1;
			int NOTA2;
			int NOTA3;
			int NOTA4;
			int NOTA5;
			int res1;
			int p=0;
			 
			 cout<<"\ningrese la primera nota\n";
			 cin>>NOTA1;
			 cout<<"ingrese la segunda nota\n";
			 cin>>NOTA2;
			 cout<<"ingrese la tercera nota\n";
			 cin>>NOTA3;
			 cout<<"ingrese la cuarta nota\n";
			 cin>>NOTA4;
			 cout<<"ingrese la quinta nota\n";
			 cin>>NOTA5;
			 res1=NOTA1+NOTA2+NOTA3+NOTA4+NOTA5;
			 cout<<"ingrese el numero de notas\n";
			 cin>>p;
			 cout<<"\nel promedio es:\n "<<res1/p;
			ofstream informacion;
	informacion.open ("notas.txt");
	informacion<<"\nNOTA1:"<<NOTA1;
	informacion<<"\nNOTA2:"<<NOTA2;
	informacion<<"\nNOTA3:"<<NOTA3;
	informacion<<"\nNOTA4:"<<NOTA4;
	informacion<<"\nNOTA5:"<<NOTA5;
	cout<<"finalizada la accion\n";
	
	break;
}

			
cout<<"\n\n",
	system("pause");

	
	cout<<"\n";
	cin>>tamalito;
	switch(tamalito){
		
	case 3:
		cout<<tareas;
		string nombre;
		string apellido;
		string concepto;
		int entrega;
		string actividad;
		cout<<"\nBIENVENIDO\n";
	cout<<"Ingrese su nombre\n";
	cin>>nombre;
	cout<<"Ingrese su apellido\n";
	cin>>apellido;
	cout<<"Ingrese el concepto\n";
	cin>>concepto;
	cout<<"Ingrese dia de entrega\n";
	cin>>entrega;
	cout<<"Ingrese la actividad\n";
	cin>>actividad;
	ofstream info;
	info.open("\nactividades.txt");
	info<<"\n nombre:"<<nombre;
	info<<"\n apellido:"<<apellido;
	info<<"\n concepto:"<<concepto;
	info<<"\n entrega:"<<entrega;
	info<<"\n actividad:"<<actividad;
	info.close();
	break;
	


	
	cout<<"\n";
	cin>>tamalito;
	switch(tamalito){
		
	case 4:
		cout<<"fin";
cout<<"\n------------------------------------------------------------------------------";    
	int b3=0;
	int b4=0;
	int programa=0;
		
 		break;
 		cout<< "\n"<<endl;
		cout<<"\n\n",
	system("pause");

	
	cout<<"\n";
	cin>>tamalito;
	switch(tamalito){
		
 	case 4:
 		cout<<"\nnotas y promedio";
			int NOTA1;
			int NOTA2;
			int NOTA3;
			int NOTA4;
			int NOTA5;
			int res1;
			int p=0;
			 cout<<"\n------------------------------------------------------------------------------";    
	int b3=0;
	int b4=0;
	int programa=0;
	
	  while(b3<50){
		cout<<b4;
		b3 = b3+1;	
 				break;
 				cout<< "\n"<<endl;
 				cout<<"\n\n",
	system("pause");
	break;
}
}
}
}
}

	return 0;

}
	
