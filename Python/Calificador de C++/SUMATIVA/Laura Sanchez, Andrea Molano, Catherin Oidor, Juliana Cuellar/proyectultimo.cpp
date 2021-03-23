#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <fstream>


using namespace std;
int main(int argc, char** argv) {
	string nombre; 
	cout << "Escriba su nombre:\n ";
	cin >> nombre; 
	string nombredelcontacto;
	string numerodelcontacto;
	string correodelcontacto;
	string conexionconelcontacto;
	string nota1;
    string nota2;
    string nota3;
    string nota4;
    string nota5;
    int numeroescogido;
    int suma1; 
	int suma2;
	int respuestasuma;
	int resta1; 
	int resta2;
	int respuestaresta;
	int division1; 
	int division2;
	int respuestadivision;
	int raiz1;
	int potencia1=0;
    int potencia2=1;
    int potencia3=0;
    int hol;
    int es;
    int dia;
    int mes;
    int anio;
	int dias;
    string meses;
    int anios;
    char evento;
	
	char letrica = 205;
	char letrica2 = 186;
	int ejecutaropcion = 0;
	int principal = 0; 
	int final = 0;
	int multiplicacion1; 
	int multiplicacion2;
	int respuestamultiplicacion;
	
	while (final == 0){
	     principal = 0;
	
	                cout<<"                                                        "; 
    while (principal < 50){
	
	 cout <<letrica;
	 principal = principal + 1;
}


	principal=0;
	cout<<"\n                                  "<<letrica2<<"                     ~BIENVENIDO A SU AGENDA VIRTUAL "<<nombre<<"~             "; 
	cout<<"\n                                  "<<letrica2<<"   Seleccione la opcion que quiere ejecutar:                                   "<<letrica2;
	cout<<"\n                                  "<<letrica2<<" 1). Guarde Sus Contactos.                                                     "<<letrica2;
	cout<<"\n                                  "<<letrica2<<" 2). Notas.                                                                    "<<letrica2;
	cout<<"\n                                  "<<letrica2<<" 3). Calculadora.                                                              "<<letrica2;
	cout<<"\n                                  "<<letrica2<<" 4). Calendario.                                                               "<<letrica2;
	cout<<"\n                                  "<<letrica2<<" 5). Fechas importantes.                                                       "<<letrica2;
	cout<<"\n                                  "<<letrica2<<" 6). Salga de su sesion.                                                       "<<letrica2;
	
	while(principal < 50){
	
	 cout <<letrica;
	 principal = principal + 1;
}
	
	cin>> ejecutaropcion; 
	switch(ejecutaropcion){
	
	case 1: 
	    cout <<"Eligio la funcion de guardar sus contactos";
	      
	ofstream guardesuscontactos;
	
	guardesuscontactos.open("contactos.txt");
	
	cout << "Escriba el nombre de su contacto: \n"; 
	cin >> nombredelcontacto;
	
	cout << "Escriba el numero celular de su contacto: \n"; 
	cin >> numerodelcontacto;
		
	cout << "Escriba el correo electronico de su contacto: \n"; 
	cin >> correodelcontacto;
	
	
	cout << "Escriba su conexion con el contacto: \n"; 
	cin >> conexionconelcontacto; 
	guardesuscontactos<< "El nombre del contacto es: \n"<< nombredelcontacto << "\n" << "El numero del contacto es: \n "<< numerodelcontacto << "\n"<< "El correo electronico del contacto es: \n"<< correodelcontacto << "\n"<< "Su conexion con el contacto es:\n"<<conexionconelcontacto<<endl;
	
	
	guardesuscontactos.close();
	       break; 
	       
	case 2: 
	      cout <<"Eligio la funcion de notas";

ofstream guardesusnotas;

guardesusnotas.open("notas.txt");

cout << "Escriba su nota1: \n";
cin >> nota1;

cout << "Escriba su nota2: \n";
cin >> nota2;

cout << "Escriba su nota3: \n";
cin >> nota3;


cout << "Escriba su nota4: \n";
cin >> nota4;

cout << "Escriba su nota5: \n";
cin >> nota5;

guardesusnotas<< "Nota1 es: \n"<< nota1 << "Nota2 es: \n "<< nota2 << "\n"<< "Nota3 es: \n"<< nota3 << "\n"<< "Nota4es:\n"<<nota4<< "\n"<< "Nota5es:\n"<<nota5<<endl;


guardesusnotas.close();
	    break;
	
	case 3: 
	      cout <<"Eligio la funcion de calculadora"; 
	
	cout<< "Bienvenido/a esta es una calculadora\n" << "Digite\n" << "(1)= Suma\n" << "(2)= Resta\n" << "(3)= Multiplicacion\n" << "(4)= Division\n" << "(5)= Raiz Cuadrada\n" << "(6)= Potenciar\n";
	cin>> numeroescogido;
	
	switch (numeroescogido){
		
		case 1:
			
			cout << "Eligio suma\n" << "Por favor dijite el primer numero\n";
			cin >> suma1;
			cout << "Por favor dijite el segundo numero\n";
			cin >> suma2;
			
			respuestasuma= suma1 + suma2; 
			cout << "La respuesta a la suma es:\n" << respuestasuma;
		    break;
		case 2: 
			 
			cout << "Eligio resta\n" << "Por favor dijite el primer numero\n";
			cin >> resta1;
			cout << "Por favor dijite el segundo numero\n";
			cin >> resta2;
			
			respuestaresta= resta1 - resta2; 
			cout << "La respuesta a la resta es:\n" << respuestaresta;
		    break;
		case 3: 
			 
			cout << "Eligio multiplicacion\n" << "Por favor dijite el primer numero\n";
			cin >> multiplicacion1;
			cout << "Por favor dijite el segundo numero\n";
			cin >> multiplicacion2;
			
			respuestamultiplicacion= multiplicacion1 * multiplicacion2; 
			cout << "La respuesta a la multiplicacion es:\n" << respuestamultiplicacion;
		    break;
	    case 4: 
			 
			cout << "Eligio division\n" << "Por favor dijite el primer numero\n";
			cin >> division1;
			cout << "Por favor dijite el segundo numero\n";
			cin >> division2;
			if ( division1 == 0){
		cout<< "\nNo se puede dividir en 0";
		}else{
			respuestadivision= division1 / division2; 
			cout << "La respuesta a la division es:\n" << respuestadivision;
			}
		    break;
		case 5:  
			 
			cout << "Eligio raiz\n" << "Por favor dijite el numero\n";
			cin >> raiz1;
			
			cout << "La respuesta a la raiz es:\n" << sqrt (raiz1);
			break;
		case 6: 
	
	        cout << "Ingrese el numero que quiere factorizar: \n"; 
	        cin >> potencia1; 
	
	        while(potencia3 <= potencia1){
		 
	        potencia3 = potencia3 + 1;
         	potencia2= potencia3*potencia2;
	
	        cout << potencia3 << "!=" << potencia2; 
		}
	        break; 
        }
	    break;



	case 4: 
	      cout <<"Eligio la funcion de calendario";
	      
ofstream soda;
cout<<       "Calendario 2020\n";
cout<<"Seleccione el mes con un numero\n";
cout<<"1.Enero\n";
cout<<"2.Febrero\n";
cout<<"3.Marzo\n";
cout<<"4.Abril\n";
cout<<"5.Mayo\n";
cout<<"6.Junio\n";
cout<<"7.Julio\n";
cout<<"8.Agosto\n";
cout<<"9.Septiembre\n";
cout<<"10.Octubre\n";
cout<<"11.Noviembre\n";
cout<<"12.Diciembre\n";

cin>>hol;


switch(hol){
case 1:
cout<<"Enero\n";
cout<<       "1 2 3 4\n";  
cout<<"5 6 7 8 9 10 11 \n";  
cout<<"12 13 14 15 16 17 18\n";
cout<<"19 20 21 2 23 24 25\n";
cout<<"26 27 28 29 30 31\n";

break;
case 2:
cout<<"Febrero\n";
cout<<"1\n";
cout<<"2 3 4 5 6 7 8\n";
cout<<"9 10 11 12 13 14 15\n";
cout<<"16 17 18 19 20 21 22\n";
cout<<"23 24 25 26 27 28 29\n";
 
break;
case 3:
cout<<"Marzo\n";
cout<<"1 2 3 4 5 6 7\n";
cout<<"8 9 10 11 12 13 14 \n";
cout<<"15 16 17 18 19 20 21\n";
cout<<"22 23 24 25 26 27 28\n";
cout<<"29 30 31";

break;
case 4:
cout<<"Abril\n";
cout<<"1 2 3 4 \n";
cout<<"5 6 7 8 9 10 11\n";
cout<<"12 13 14 15 16 17 18\n";
cout<<"19 20 21 22 23 24 25\n";
cout<<"26 27 28 29 30 \n";
break;
case 5:
cout<<"Mayo\n";
cout<<"1 2\n";
cout<<"3 4 5 6 7 8 9 \n";
cout<<"10 11 12 13 14 15 16\n";
cout<<"17 18 19 20 21 22 23\n";
cout<<"24 25 26 27 28 29 30\n";

break;
case 6:
cout<<"Junio\n";
cout<<"1 2 3 4 5 6\n";
cout<<"7 8 9 10 11 12 13\n";
cout<<"14 15 16 17 18 19 20\n";
cout<<"21 22 23 24 25 26 27\n";
cout<<"28 29 30\n";

break;
case 7:
cout<<"Julio\n";
cout<<"1 2 3 4\n";
cout<<"5 6 7 8 9 10 11\n";
cout<<"12 13 14 15 16 17 18\n";
cout<<"19 20 21 22 23 24 25\n";
cout<<"26 27 28 29 30 31\n";

break;
case 8:
cout<<"Agosto\n";
cout<<"1 2 3 4 5\n";
cout<<"6 7 8 9 10 11 12\n";
cout<<"13 14 15 16 17 18 19\n";
cout<<"20 21 22 23 24 25 26\n";
cout<<"27 28 29 30 31\n";

break;
case 9:
cout<<"Septiembre\n";
cout<<"1 2 3 4 5\n";
cout<<"6 7 8 9 10 11 12\n";
cout<<"13 14 15 16 17 18 19\n";
cout<<"20 21 22 23 24 25 26\n";
cout<<"27 28 29 30 31\n";

break;
case 10:
cout<<"Octubre\n";
cout<<"1 2 3\n";
cout<<" 4 5 6 7 8 9 10\n";
cout<<"11 12 13 14 15 16 17\n";
cout<<"18 19 20 21 22 23 24\n";
cout<<"25 26 27 28 29 30 31\n";

break;
case 11:
cout<<"Noviembre\n";
cout<<"1 2 3 4 5 6 7\n";
cout<<"8 9 10 11 12 13 14\n";
cout<<"15 16 17 18 19 20 21\n";
cout<<"22 23 24 25 26 27 28\n";
cout<<"29 30 \n";

break;
case 12:
cout<<"Diciembre\n";
cout<<"1 2 3 4 5\n";
cout<<"6 7 8 9 10 11 12\n";
cout<<"13 14 15 16 17 18 19\n";
cout<<"20 21 22 23 24 25 26\n";
cout<<"27 28 29 30 31\n";

break;

}
        break;
	case 5: 
	      cout << "Eligio la funcion de fechas importantes";

cout <<"Ingrese fecha que considere importante \n ";

cout <<"Ingrese dia:";
cin >> dias;

cout <<"Ingrese mes:";
cin >> meses;

cout <<"Ingrese anio: ";
cin >> anios;

cout << "Describa evento:";
cin >> evento;
  break;
	    
	case 6: 
	     final = 1;
	    break;
	}
		system("cls");
	}
	 
	return 0;
}
