#include <iostream>
#include <stdlib.h>
#include  <math.h>
#include  <string>
using namespace std;
int main(int argc, char** argv) {
	string sign;
	cin>>sign;
	char letrica = 205;
	char letrica2 = 186;
	int perro = 0;
	int no = 0;
	int numero = 0;
	int asd = 0;
	int b;
	int a;
	int c;
	int e;
	int f;
    int d;
	int h;
	int i;
	int o;
	int g = 0;
	int res = 1;
	int j = 0;
	int z;
	int gato;
	int x;

	while(no == 0){
	cout<<"                             ";
	while(numero < 50){
		
		cout<<letrica;
		numero = numero +1;
		
		
	}
	numero = 0;
	cout<<"\n                           "<<letrica2<<"   BIENVENIDO "<<	sign<<   "                        ";
	cout<<"\n                           "<<letrica2<<"1. calculadora                                   "<<letrica2;
	cout<<"\n                           "<<letrica2<<"2. hora                                          "<<letrica2;
	cout<<"\n                           "<<letrica2<<"3. Calendario                                    "<<letrica2;
	cout<<"\n                           "<<letrica2<<"4. contactos                                      "<<letrica2;
	
	cout<<"\n                            ";                                                  
	
	while (numero < 50){
		
		cout<<letrica;
		numero = numero + 1;
	}
		cout<<"\n";
		cin>>perro;
	    switch(perro){	
		   case 1:
		   cout<<"\nBienvenida a su calculadora ";
		   cin>>x;
		   switch(x){
		      case 1:
			   cout<<"\n";
			  cin >>
			   cout<<"digite el primer numero";
			  cin>>a;
			   cout<<"digite el segundo numero";
			  cin>>b;
			   cout<<a+b;
			  break;
		      case 2:
			 cout<<"digite el primer numero";
			 cin>>c;
			  cout<<"digite el segundo numero";
			 cin>>d;
			  cout<<c-d;
			 break;
	         case 3:
			cout<<"digite el primer numero";
			 cin>>f;
			 cout<<"digite el segundo numero";
			 cin>>e;
			 cout<<f*e;
			 break;
		      case 4:
			 cout<<"digite el primer numero";
			 cin>>h;
			 cout<<"digite el segundo numero";
			 cin>>i;
			 cout<<h/i;
			 break;
			 case 5:
			 	cout<<"digite el numero al que quiera sacar raiz";
			 	cin>>o;
			 	cout<<sqrt (o);
			 	break;
		      case 6:
			  cout<<"digite el numero :";
			  cin >>j;
			  while(g < j){
				
				g= g + 1;
				res = g * res;
				
			}
			cout<<"el factorial es: " << res;
			break;
				}
				break;
		 case 2:
				int info;
				cout<<"\n hora \n";
				cin >> info;
				break;
		 case 3:
				cout<<"\nObserve su calendario ";
				break;
		 case 4:
				cout<<"\n contactos ";
				
         	 cout<<"escriba su numero de celular:\n";
	         cin>> gato;
             ofstream archivo;
	         archivo.open("contactos.txt");
	         archivo<<"su numero es "<<gato;
	
				break;
	
		
	}

}
