#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main()
{	
	ifstream asd;
	ofstream fout ("Notas.txt");
	int a;
	 char a2 = 205 ;
    char a3 = 186 ;
    int b = 0;
    int z = 0;
    int w =0;
    int x =0;
    int s23,s24,s25,s26,s27,s28,s29,s30;
    string c5;
   	string s1, s2,s3,s4,s5,s6,s7,s8,s9,s10,s20,s21,s22;
   	cout<<"ingrese su nombre""\n";
 cin>> c5;
while(b == 0){
 cout<<"ingrese su profesion( 2 para profesor o 1 para estudiante)\n";
 cin>>w;
 switch (w){
 case 1:
	cout<<"\n                                ""               BIENVENIDO  "<<c5<<"          " ;
	cout<<"\n                                "<<a3<<"para conocer su promedio presione 1                "<< a3;
	cout<<"\n                                "<<a3<<"para ver el salon en el que tiene clase presione 2 "<< a3;
	cout<<"\n                                "<<a3<<"para ver su horario de clases presione 3           "<< a3;
	cout<<"\n                                "<<a3<<"para ingresar a su calculadora movil presione 4    "<< a3;
	cout<<"\n                                "<<a3<<"para ver el profesor de cada materia presione 5    "<< a3;
	cout<<"\n                                "<<a3<<"para ingresar al asistente comercial  presione 7   "<< a3;
	cout<<"\n                                "<<a3<<"para cerrar el programa presione  6                "<< a3;
	cout<<"\n                                "<<a3<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a3;
	cin>>a;
	switch(a){
	
	case 1:
		
	int b2,c2,d2,e2,f2,g2,h2,i2,k2;
		cout<<"ingrese sus notas, ingrese 8 notas \n";
		cin>>b2;
		cin>>c2;
		cin>>d2;
		cin>>e2;
		cin>>f2;
		cin>>g2;
		cin>>h2;
		cin>>i2;
		k2 = b2+c2+d2+e2+f2+g2+h2+i2;
		cout<<"su promedio es de: "<< k2/8 ;


	
	
	break;
	case 7:
		double pro1,pro2,pro3,a,b,c,d;
    cout<<" Producto #1 : ";
    cin>>pro1;
    cout<<" Producto #2 : ";
    cin>>pro2;
    cout<<" Producto #3 : ";
    cin>>pro3;
    a=pro1+pro2+pro3;
    cout<<" Subtotal : "<<a<<endl;
    b=a*.15;
    cout<<" El iva es : "<<b<<endl;
    c=b+a;
    cout<<" Total : "<<c<<endl;
    a=a+b;
    cout<<" El descuento : "<<c*.20<<endl;
    a=a-(c*.30);
    cout<<" Total final es : "<<a<<endl;
    cout<<" Con cuanto pagas? : ";
    cin>>d;
    cout<<" Tu cambio : "<<d-a<<endl;
    cout<<" Gracias por su compra ."<<endl;
		break;
   
    case 2:
		
cout<<"Matematicas:302 \n Ingles:402 \n Espanol:602 \n Frances:501 \n Fisica:503 \n Quimica:503 \n Historia:205 \n Diseno:505 \n Artes:201 \nFilosofia:205 \n Biologia:306 \n";
	
	break;
		case 3:
				

asd.open("C:\\Users\\ASUS X412DA\\Desktop\\horario.txt");
if (!asd.is_open()){
	cout<<"error en el archivo";
}
	asd >>s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;
	asd.close();
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
	cout << s6 << endl;
	cout << s7 << endl;
	cout << s8 << endl;
	cout << s9 << endl;
	cout << s10 << endl;

		
		
		
			
			break;	
			case 4:
				
	cout<<"Bienvenido!\n Para sumar presione el numero 1";
	cout<<"\n Para restar presione el numero 2";
	cout<<"\n Para multiplicar presione el numero 3";
	cout<<"\n Para dividir presione el numero 4";
	cout<<"\n Para buscar la raiz presione el numero 5";
	cout<<"\n Para buscar el numero factorial presione el numero 6";
	cin>>z;
		switch(z){
		case 1:
			int b2;
			int a2;
			cout<<"ingrese el primer numero";
			 cin>>a2;
			 cout<<"ingrese el segundo numero";
			 cin>>b2;
			 cout<<a2+b2;
			break;
		case 2:
			int c;
			int d;
			cout<<"ingrese el primer numero";
			 cin>>c;
			 cout<<"ingrese el segundo numero";
			 cin>>d;
			 cout<<c-d;
			 break;
	    case 3:
	    	int e;
			int f;
			cout<<"ingrese el primer numero";
			 cin>>f;
			 cout<<"ingrese el segundo numero";
			 cin>>e;
			 cout<<f*e;
			 break;
		case 4:
			int h;
			int i;
			cout<<"ingrese el primer numero";
			 cin>>h;
			 cout<<"ingrese el segundo numero";
			 cin>>i;
			 if(i==0){cout<<"no se puede dividir entre cero";
			 }else{
			 cout<<h/i;
			 }
			 break;
			 case 5:
			 	int o;
			 	cout<<"ingrese el numero al que quiera sacar raiz";
			 	cin>>o;
			 	if(o<=0){
			 		cout<<"no se pude sacar una raiz negativa";
				 }else{
				 
			 	cout<<sqrt (o);}
			 	break;
		case 6:
			int g = 0;
			int res = 1;
			int j = 0;
			cout<<"Vamos a buscar el factorial de un numero, por favor digitelo:";
			cin >>j;
			while(g < j){
				
				g= g + 1;
				res = g * res;
				
			
			cout<<"el factorial es: " << res;
			
			}
			break;
		}
		case 6:
		
               b = 1;
            	break;
            	case 5: 
       	cout<<"sus profesores son :""\n";
       	cout<<"matematicas: Mauricio Flechas""\n";
		cout<<"quimica:Sara Reina""\n";		
		cout<<"fisica:liseth sarmiento""\n";
		cout<<"diseno:Cristian Rodriguez""\n";	
		cout<<"musica: Daniel Reina""\n";	
		cout<<"sociales: Julieth Ramos""\n";
		cout<<"filosofia:Leidy Padilla""\n";		
		cout<<"educacion fisica:Jairo Alvarado ""\n";
		cout<<"artes:Katherine Rodriguez""\n";
		cout<< "frances:Jessica Gordillo""\n";
		cout<<"espanol:Viviana Juyo""\n";
		cout<<"ingles:Camilo Mora""\n";
		cout<<"biologia:Angela Corredor""\n";
		cout<<"danzas:Stephanie Rayo""\n";
		cout<<"historia:Kimberly Acosta""\n";		
		break;
		break;
 }
 break;
		case 2:	
		cout<<"\n                                ""               BIENVENIDO  profesor "<<c5<<"          " ;
	cout<<"\n                                "<<a3<<"para registrar la nota de un estudante presione 1   "<< a3;
	cout<<"\n                                "<<a3<<"para ver si el estudiante esta pasando la materia 2 "<< a3;
	cout<<"\n                                "<<a3<<"para ver su horario de clases presione 3            "<< a3;
	cout<<"\n                                "<<a3<<"para ingresar a su calculadora movil presione 4     "<< a3;
	cout<<"\n                                "<<a3<<"para cerrar el programa presione  5                 "<< a3;
	cout<<"\n                                "<<a3<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a3;
	cin>>x;
	switch (x){
		case 1:
			
    cout <<"ingrese el nombre y apellido del estudiante, el curso y las notas"<< endl;
    cin>>s20>>s21>>s22>>s23>>s24>>s25>>s26>>s27>>s28>>s29>>s30;
	fout <<"las notas del estudiante son:"<<endl;
	fout <<s20<<" "<<s21<<" del grado "<< s22 << "\n"<< s23<<"\n"<<  s24 <<"\n"<<  s25 <<"\n"<<  s26 <<"\n"<<  s27 <<"\n"<<  s28 <<"\n"<<  s29 <<"\n"<<  s30;
	
	break;
	case 2:
		cout<<"a continuacion ingrese 8 notas a las cuales se les va a sacar un promedio\npara saber si el estudiante esta pasando la materia"<< endl;
		
		int b3,c3,d3,e3,f3,g3,h3,i3,k3;
	
		cin>>b3;
		cin>>c3;
		cin>>d3;
		cin>>e3;
		cin>>f3;
		cin>>g3;
		cin>>h3;
		cin>>i3;
		k3 = b3+c3+d3+e3+f3+g3+h3+i3;
		cout<<"\n el promedio del estudiante es de: "<< k3/8 <<endl;
		break;
		case 3:
			cout<<"lunes :10a,7b,8c,9d,6a,10b,7a,8b \n martes:10a,11b,7c,8d,9e,6a \n miercoles:10b,7c,8a,9b,6c,10a,7b,11b \n jueves:10b,11c,7a,8b,9c,6b \n viernes:10a,7b,8c,9d,6a,10b,7a,8b \n";
		break;
		case 4:
				cout<<"Bienvenido!\n Para sumar presione el numero 1";
	cout<<"\n Para restar presione el numero 2";
	cout<<"\n Para multiplicar presione el numero 3";
	cout<<"\n Para dividir presione el numero 4";
	cout<<"\n Para buscar la raiz presione el numero 5";
	cout<<"\n Para buscar el numero factorial presione el numero 6";
	cin>>z;
	
			switch(z){
		case 1:
			int b2;
			int a2;
			cout<<"ingrese el primer numero";
			 cin>>a2;
			 cout<<"ingrese el segundo numero";
			 cin>>b2;
			 cout<<a2+b2;
			break;
		case 2:
			int c;
			int d;
			cout<<"ingrese el primer numero";
			 cin>>c;
			 cout<<"ingrese el segundo numero";
			 cin>>d;
			 cout<<c-d;
			 break;
	    case 3:
	    	int e;
			int f;
			cout<<"ingrese el primer numero";
			 cin>>f;
			 cout<<"ingrese el segundo numero";
			 cin>>e;
			 cout<<f*e;
			 break;
		case 4:
			int h;
			int i;
			cout<<"ingrese el primer numero";
			 cin>>h;
			 cout<<"ingrese el segundo numero";
			 cin>>i;
			 if(i==0){cout<<"no se puede dividir entre cero";
			 }else{
			 cout<<h/i;
			 }
			 break;
			 case 5:
			 	int o;
			 	cout<<"ingrese el numero al que quiera sacar raiz";
			 	cin>>o;
			 	if(o<=0){
			 		cout<<"no se pude sacar una raiz negativa";
				 }else{
				 
			 	cout<<sqrt (o);}
			 	break;}
		case 5: 
		b=1;
		break;
}
	break;
		}}
		cout<<"gracias por utilizar nuestros servicios";

		
}
