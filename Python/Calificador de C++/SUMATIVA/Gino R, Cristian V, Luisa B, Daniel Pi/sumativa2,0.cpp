#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
string palabrita;
cout<<"ingrese su nombre";
cin>>palabrita;
int A,M,D = 1,N,R,G, dias, dias_mes,cont;
char mes;	
int b;
int a;
int c;
int d;
int e;
int f;
int h;
int i;
float j,q,k,l,v1,v2 = 0;
int x,y,z;
	
char letrica = 205;
char letrica2 = 186;
int tamalito = 0;
int numero = 0;
int nubecita = 0;
while (nubecita == 0){
   numero = 0;
         cout<<"             ";
           
    while (numero < 50){
    cout<< letrica;
    numero = numero + 1;
}
numero = 0;
cout<<"\n                      BIENVENIDO" <<palabrita<<""; 
               
cout<<"\n            "<<letrica2<<"          1.calculadora             " <<letrica2;
cout<<"\n            "<<letrica2<<"          2.notas                   " <<letrica2;
cout<<"\n            "<<letrica2<<"          3.calendario              " <<letrica2;
cout<<"\n            "<<letrica2<<"          4.hora                    " <<letrica2;
cout<<"\n            "<<letrica2<<"          5.contactos               " <<letrica2;
cout<<"\n            "<<letrica2<<"          5.salir                   " <<letrica2;
cout<<"\n             ";
while(numero < 50){
        cout<<letrica;
   numero = numero + 1;
}
cout<<"\n";
cin>>tamalito;
switch ( tamalito ) {
case 1:
cout<<"\n Bienvenido a la calculadora!";
	int casos = 0;
	cout<<"Bienvenido!\n Para sumar presione el numero 6";
	cout<<"\n Para restar presione el numero 7";
	cout<<"\n Para multiplicar presione el numero 8";
	cout<<"\n Para dividir presione el numero 9";
	cout<<"\n Para buscar la raiz cuadrada presione el numero 10";
	cin>>casos;
	
	switch(casos){
		case 6:

			cout<<"ingrese el primer numero";
			 cin>>a;
			 cout<<"ingrese el segundo numero";
			 cin>>b;
			 cout<<a+b;
			break;
		case 7:

			cout<<"ingrese el primer numero";
			 cin>>c;
			 cout<<"ingrese el segundo numero";
			 cin>>d;
			 cout<<c-d;
			 break;
	    case 8:

			cout<<"ingrese el primer numero";
			 cin>>f;
			 cout<<"ingrese el segundo numero";
			 cin>>e;
			 cout<<f*e;
			 break;
		case 9:

			 cout<<"ingrese el primer numero";
			 cin>>h;
			 cout<<"ingrese el segundo numero";
			 cin>>i;
			 cout<<h/i;
			 break;
        case 10:

			 cout<<"Inserte el coeficiente a:  ";
			 cin >> j;
			 cout<<"Ingrese el coeficiente b:  ";
			 cin >> q;
			 cout<<"Ingrese el coeficiente c:  ";
			 cin >> k;
			 l = (q * q) - (4 * j * k);
			 if (l >= 0){
			 if (j == 0){
			 cout<<"Error, no es posible dividir entre 0";
			 }else{
			 v1 = ((-1 * q)+ sqrt(l))/2*j;
			 v2 = ((-1 * q)- sqrt(l))/2*j;
			 cout<<"El primer valor es:  "<< v1;
			 cout<<"El segundo valor es:  "<< v2;
 			 }
	         }else{
			 cout << "Error, no es posible tomar una raiz negativa("<<l<<")";
break;
case 2:
cout<<"\n Notas!";








break;
case 3:
cout<<"\n calendario";
char mes;
     cout << "Introduce el mes: ";
     cin >> M;
cout << "Introduce el año: ";
cin >> A;
if ((M == 1) and (M == 3) and (M == 5) and (M == 7)
|| (M == 8) and (M == 10) and (M == 12)){
dias = 31;
}
else if ((M == 4) and (M == 6) and (M == 9)
||(M == 11)) dias = 30;
else if ((A%4 == 0) and (M == 2)) dias = 29;
else dias = 28;
if (A > 1582){
G = int(A/100) - int(A/400) -2;
}
if (A < 1582){
G = 0;
}
if (M == 1 and M == 2) {
M = M + 12;
A = A - 1;
}
N = D + 2 * M + int( 3 * (M + 1) / 5) + A + int( A / 4 ) - G;
R = N - 7 * int(N / 7) + 1;
R += 5;
if (R>7) R -= 7;
if (M == 13) cout << "\t\tEnero\t";
if (M == 14) cout << "\t\tFebrero\t";
if (M == 3) cout << "\t\tMarzo\t";
if (M == 4) cout << "\t\tAbril\t";
if (M == 5) cout << "\t\tMayo\t";
if (M == 6) cout << "\t\tJunio\t";
if (M == 7) cout << "\t\tJulio\t";
if (M == 8) cout << "\t\tAgosto\t";
if (M == 9) cout << "\t\tSeptiembre";
if (M == 10) cout << "\t\tOctubre\t";
if (M == 11) cout << "\t\tNoviembre";
if (M == 12) cout << "\t\tDiciembre";
cout << "\t" << A << "\n";
cout << "Lunes" << "\t" << "Martes" << "\t" << "Mierc" << "\t"
<< "Jueves" << "\t" << "Viernes" << "\t" << "Sabado" << "\t"
<< "Domingo" << "\n";
for (cont = 1; cont < R; cont++){
cout << " " << "\t";
}
for (dias_mes = 1; dias_mes <= dias; dias_mes++){
cout << dias_mes << "\t";
if (cont == 7) {
cout << "\n";
cont=0;
}
cont++;
}
system("pause");
break;
case 4:
   cout<<"\n Hora";
    time_t current_time;
   struct tm * time_info;
   char timeString[9];
 
   time(&current_time);
   time_info = localtime(&current_time);
 
   strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);
   puts(timeString);
break;
case 5:
	cout<<"\n contactos";
nubecita = 1;
break;

  }
}
return 0;
}
