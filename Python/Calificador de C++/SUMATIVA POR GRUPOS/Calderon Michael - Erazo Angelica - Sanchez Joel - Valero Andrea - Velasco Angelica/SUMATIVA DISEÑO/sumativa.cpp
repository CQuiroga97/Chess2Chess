#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		int falgo = 0;
	int opciones = 0;
	int b,c,suma;
	int f,v,resta;
	int s,r,multiplicar;
	int x,t,dividir;
	int z= 0;
	int resul = 1;
	int u = 0;
	char a =205;
	char b4= 205;
	char a2 = 186;
	char a3 = 186;
	int b2 = 0;
	int b3 = 0;
	int programa = 0 ;
	int horarios = 0;
	float N1, N2, N3, N4, N5, N6, P;
	int guardar = 0;
	ofstream profesores;
	ifstream profes("info.txt");
	string nom;
	string ape;
	string materia;
	string email;
	int tel= 0;
	
	  string N;
     string palabrita;
    	
	string nombre;
	int identificacion;
	
    
	cout<<"BIENVENIDO\n";
	cout<<"Ingrese su nombre\n";
	cin>>nombre;
	cout<<"Ingrese su identificacion\n";
	cin>>identificacion;
	ofstream banco;
	banco.open("datos.txt");
	banco<<"\n NOMBRE:"<<nombre;
	banco<<"\n IDENTIFICACION:"<<identificacion;
	banco.close();	
	ifstream bancos("datos.txt");
	if(bancos.fail()){
		cerr<<"NO SE ENCUENTRA EL ARCHIVO";
	}else{
		char lineas[130];
	while(!bancos.eof()){
	
		bancos.getline(lineas, sizeof(lineas));
		cout<<lineas<<"\n";
		cout<<"\n";
		system("cls");
	}

cout<<"Digite su apodo: \n";
		cin>>palabrita;

	while (programa == 0){
cout<<"                             ";
	while(b2<50){
		cout<<a;
		b2 = b2+1;
	
	}
	cout<<"\n                                            BIENVENIDOS "<<palabrita<<"         "; 
	cout<<"\n                           "<<a2<<"                A SU AGENDA E.S.A                 "<<a2;    
	cout<<"\n                           "<<a2<<" 1. Calculadora                                   "<<a2; 
	cout<<"\n                           "<<a2<<" 2. Promedio                                      "<<a2; 
	cout<<"\n                           "<<a2<<" 3.Horario                                        "<<a2; 
	cout<<"\n                           "<<a2<<" 4.Salon de clase                                 "<<a2; 
	cout<<"\n                           "<<a2<<" 5.Profesores                                     "<<a2; 
	cout<<"\n                           "<<a2<<" 6.Fin de la agenda                               "<<a2; 
	  
	  b2=0;
cout<<"\n                             ";    
	  while(b2<50){
		cout<<a;
		b2 = b2+1;

		}
	cout<<"\n Para Calculadora presione el numero 1";
	cout<<"\n Para Sacar tu promedio presione el numero 2";
	cout<<"\n Para Horario presione el numero 3";
	cout<<"\n Para Salon de clase dividir presione el numero 4";
	cout<<"\n Para ver nombre de los docentes 5";
	cout<<"\n Para cerrar agenda presione el numero 6";		
	cout<<"\n";
		cin>> falgo;
		
	switch (falgo){
case 1:
 	cout<<"\n Bienvenido a Calculadora";
 	cout<<"\n Para sumar presione el numero 6";
	cout<<"\n Para restar presione el numero 7";
	cout<<"\n Para multiplicar presione el numero 8";
	cout<<"\n Para dividir presione el numero 9";
	cout<<"\n Para encontrar la raiz presione el numero 10";
	cout<<"\n Para encontrar el numero factorial presione el numero 11";
 	cin>>opciones;
	switch (opciones){

		case 6:
	
			cout<<"Vamos a sumar!\n";
			cout<<"dijite el primer numero\n";
			cin>>b;
			cout<<"dijite el segundo numero\n";
			cin>>c;
			suma=b+c;
			cout<<"la suma es\n"<<b<<"+"<<c<<"="<<suma;
			break;
		case 7:

			cout<<"Vamos a restar!\n";
			cout<<"dijite el primer numero\n";
			cin>>f;
			cout<<"dijite el segundo numero\n";
			cin>>v;
			resta=f-v;
			cout<<"la resta es\n"<<f<<"-"<<v<<"="<<resta;
			break;
			case 8:
				
			cout<<"Vamos a mutiplicar!\n";
			cout<<"dijite el primer numero\n";
			cin>>s;
			cout<<"dijite el segundo numero\n";
			cin>>r;
			multiplicar=s*r;
			cout<<"la multiplicacion es\n"<<s<<"*"<<r<<"="<<multiplicar;
			break;
			case 9:
				
			cout<<"Vamos a dividir!\n";
			cout<<"dijite el primer numero\n";
			cin>>x;
			cout<<"dijite el segundo numero\n";
			cin>>t;
			if (x==0){
			cout <<"No se puede divir entre cero";
			}else{
			
			dividir=x/t;
			cout<<"la division es\n"<<x<<"/"<<t<<"="<<dividir;
		}
			break;
		
			case 10:
			cout<<"Vamos a raiz\n";
			int e;
        	cout<<"ingrese el numero para la raiz\n";
	        cin>>e;
        	if (e<=0){
	
			cout<< "No se puede sacar la raiz negativa";

	
        	}else{
        	cout<<sqrt(e);	
	}
	
			break;
			
		    case 11:
			cout<<"Vamos a buscar el factorial\n";
			cout<<"dijite el numero\n";		
			cin >> u;
			while(z < u){
				
			z = z + 1;
			 resul = z * resul;
			cout<<u <<"! = " << resul;
			break;
			
			 cout<<"\n\n",
			 system("pause");
			 
}

}
break;
    case 2:
 	cout<<"Sacar promedio de 6 notas";
 	cout<<"Ingresa tus notas";
 	cout<<"\n";
 	cout<<"INGRESE LA PRIMERA NOTA"<<endl;
cin>> N1;
if (N1<8 && N1>0){
	cout<< "\n"<<endl; 
cout<<"INGRESE LA SEGUNDA NOTA"<<endl;
cin>> N2;
if (N2<8 && N2>0){	
	cout<< "\n"<<endl; 
cout<<"INGRESE LA TERCER NOTA"<<endl;
cin>> N3;	
if (N3<8 && N3>0){	
cout<< "\n"<<endl; 
cout<<"INGRESE LA CUARTA NOTA"<<endl;
cin>> N4;
cout<< "\n"<<endl; 	
if (N4<8 && N4>0){
cout<<"INGRESE LA QUINTA NOTA"<<endl;
cin>> N5;
cout<< "\n"<<endl; 	
if (N5<8 && N5>0){
cout<<"INGRESE LA SEXTA NOTA"<<endl;
cin>> N6;
cout<< "\n"<<endl; 
if (N6<8 && N6>0){	
}	
	
}
}
	
}
	
}

		cin>> N1, N2, N3, N4, N5, N6;
P=(N1 + N2 + N3 + N4 + N5 + N6)	/6;
cout<< "PROMEDIO OBTENIDO ES:"<<P<<endl;
cout<< "\n"<<endl;
if(P<4){
	cout<<"LA MATERIA NO HA SIDO APROBADA";
} else{
	cout<<"LA MATERIA HA SIDO APROBADA";
	cout<<"\n";
}
 	break;
 	cout<< "\n"<<endl;
 		    case 3:
 			cout<<"Este es tu Horario\n";
 			
 	cout<<"\n Para ver el horario del Lunes presione 1";
	cout<<"\n Para ver el horario del Martes presione 2";
	cout<<"\n Para ver el horario del Miercoles presione 3";
	cout<<"\n Para ver el horario del Jueves presione 4";
	cout<<"\n Para ver el horario del Viernes presione 5";
	cin>>horarios;
 	switch (horarios) {
	 case 1:
    cout<<"-------------------------------\n";
    cout<<"|   6:50/ 8:10   |   FRANCES X2 |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:10/ 8:50   |     BREAK    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:50/ 10:10  |   FISICA X2  |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   10:10/ 11:30 |  QUIMICA X2  |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   11:30/ 12:10 |    ARTES     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:10/ 12:50 |    LUNCH     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:50/ 2:10  |  SOCIALES X2 |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   2:10/ 3:30  |   INGLES X2   |\n";
    cout<<"-------------------------------";
 			break;
 				 case 2:
    cout<<"-------------------------------\n";
    cout<<"|   6:50/ 8:10   |   DISEÑO X2  |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:10/ 8:50   |     BREAK    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:50/ 9:30   |    DANZAS    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   9:30/ 10:50  |  SOCIALES X2 |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   10:50/ 12:10 |    ARTES     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:10/ 12:50 |    LUNCH     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:50/ 2:10  |  INGLES X2   |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   2:10/ 3:30  |   MUSICA X2   |\n";
    cout<<"-------------------------------";
 			break;
 			 case 3:
    cout<<"-------------------------------\n";
    cout<<"|   6:50/ 8:10   |  SOCIALES X2 |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:10/ 8:50   |     BREAK    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:50/ 10:10  |    MATH X2   |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   10:10/ 11:30 | FILOSOFIA X2 |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   11:30/ 12:10 |    ESPAÑOL   |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:10/ 12:50 |    LUNCH     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:50/ 1:30  |    ESPAÑOL   |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   1:30/ 2:50   |   FRENCH X2  |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   2:50/ 3:30   |   INGLES     |\n";
    cout<<"-------------------------------";
    			 case 4:
    cout<<"-------------------------------\n";
    cout<<"|   6:50/ 8:10   |  DIESÑO X2   |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:10/ 8:50   |     BREAK    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:50/ 10:10  |    INGLES X2 |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   10:10/ 11:30 |EDUCACION F.X2|\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   11:30/ 12:10 |     MATH     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:10/ 12:50 |    LUNCH     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   12:50/ 1:30  |     MATH     |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   1:30/ 3:30   |    LUDICA X3 |\n";
    cout<<"-------------------------------";
 
 			break;
 						 case 5:
    cout<<"------------------------------- \n";
    cout<<"|   6:50/ 8:10   |   MATH X2    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:10/ 8:50   |     BREAK    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   8:50/ 10:10  |   FISICA X2  |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   10:10/ 11:30 |  INGLES X2   |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   11:30/ 1:30  |   ESPAÑOL X3 |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   1:30/ 2:10   |     LUNCH    |\n";
    cout<<"-------------------------------";
     cout<<"-------------------------------\n";
    cout<<"|   2:10/ 3:30  |  QUIMICA X2   |\n";
    cout<<"-------------------------------";
 			cout<< "\n"<<endl;
			 break;
 			
 	
 			
 		}
 			cout<< "\n"<<endl;
 			break;
 			case 4:
 				cout<<"Estos son los salones de clase \n";
cout<<"\n------------------------------------------------------------------------------";  	            
	
 				
	cout<<"\n          SOCIALES: 205    "<<a3<<"                MATEMATICAS: 302                  "<<a3;    
	cout<<"\n          FILOSOFIA: 205   "<<a3<<"                 INGLES: 402                      "<<a3; 
	cout<<"\n          ARTES: 201       "<<a3<<"                 FRANCES: 402-501                 "<<a3; 
	cout<<"\n     BIOLOGIA: 305-503-504 "<<a3<<"                 ESPAÑOL: 502-602                 "<<a3; 
	cout<<"\n     QUIMICA : 305-503-504 "<<a3<<"                 DISEÑO: 505                      "<<a3; 
	cout<<"\n     FISICA : 305-503-504  "<<a3<<"                 HISTORIA: 205                    "<<a3; 
	  b3=0;
cout<<"\n------------------------------------------------------------------------------";    
	  while(b3<50){
		cout<<b4;
		b3 = b3+1;	
 				break;
 				case 5:
 								cout<<"Bienvenid@, con esta funcion podras ingresar y guardar informacion de tus profesores\n";
				cout<<"Por favor ingrese los siguientes datos:\n";
	
  	cout << "Ingrese el nombre de su profesor\n";
	cin >>nom;
	cout << "Ingrese el apellido de su profesor\n";
	cin >>ape;	
	cout << "Ingrese la materia que dicta este profesor\n";
	cin >> materia;
	cout << "Ingrese el correo electronico del profesor\n";
	cin >>email;
	cout << "Ingrese el telefono o celular del prorfesor\n";
	cin >>tel;
	profesores.open("info.txt");
	profesores<< "\nLa informacion de su profesor en caso de una emergencia esta aqui: ";
	profesores<< "\nNOMBRE: "<<nom;
	profesores<< "\nAPELLIDO: "<<ape;
	profesores<< "\nMATERIA: "<<materia;
	profesores<< "\nCORREO ELECTRONICO: "<<email;
	profesores<< "\nNUMERO DE TELEFONO O CELULAR: "<<tel;
	profesores.close();	
	
	 ("info.txt");
	if(profes.fail()){
		cerr<<"ERROR No pudimos encontrar la informacion en nestra base de datos";
	}else{
		char lineas [128];
	while(!profes.eof()){
		profes.getline(lineas, sizeof(lineas));
		cout<<lineas<<"\n";
	}
	}				
		break;
 				case 6:
 				cout<<"Espero que te haya sido util la agenda, adios y vuelva pronto\n";
 					programa = 123;
 					break;

}
}
}
}

	
}
	
	return 0;
}
	


