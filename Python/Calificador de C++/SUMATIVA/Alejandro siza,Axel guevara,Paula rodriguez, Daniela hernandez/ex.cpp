#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	    
	    string palabrita;
	    cin>> palabrita;
	    char a=205;
     	char b=186;
    	int c=0;
	    int d=0;
	    int e=0;
	    int f=0;
	    int g =0;
	    int h=0;
	    int i=0;
	    int j=0;
	    int k =0;
	    int l = 0;
	    int primero;
		int dos;
		int tres;
		ofstream pizza;
		int pa;
		int ma;
		int ta;
		int pe;
		int me;
		int te;
		int pi;
		int mi;
		int ti;
		ofstream gato;
	    
	    
     	while (e==0){
		    d=0;
	           	cout<<"\n                               ";                  
    	while(d<50){
	cout<<a;
		d=d+1;
	}

	d=0;
	cout<<"\n                                                    BIENVENIDO       "<<palabrita <<"                    ";
	cout<<"\n                               "<<b<<"   Seleccione una opcion:                       "<<b;
	cout<<"\n                               "<<b<<"1  Guardar guardar numeros telefonicos          "<<b;
    cout<<"\n                               "<<b<<"2  Guardar guardar fechas importantes           "<<b;
	cout<<"\n                               "<<b<<"3  Hora                                         "<<b;
	cout<<"\n                               "<<b<<"4  Promediar notas                              "<<b;
	cout<<"\n                               "<<b<<"5  Salir                                        "<<b;
	cout<<"\n                               ";
    while(d<50){
    	cout<<a;
        d=d+1;
	}
	cout <<"\n";
	cin>>c;
	switch(c){
    case 1:
    	cout<<"\ Guardar guardar numeros telefonicos\n";
    	cout<< " escriba primer numero que quiere guardar\n";
		cin>> primero;
		cout<< " escriba segundo numero que quiere guardar\n";
		cin>> dos;
		cout<< " escriba tercer numero que quiere guardar\n";
		cin>> tres;
		pizza.open ("Telefonos.txt");
		pizza<< "su primer dato es:\n"<<primero;
		pizza<< "\nsu segundo dato es:\n"<<dos;
		pizza<< "\nsu tercer dato es:\n"<<tres;
		pizza.close();
	    	break;
    case 2:	cout<<"\ Guardar guardar fechas importantes \n";
    	cout<< " escriba primrera fecha \n";
		cin>> pa;
		cout<<"/";
		cin>>ma;
		cout<<"/";
		cin>>ta;
		cout<< " escriba segunda fecha \n";
		cin>> pe;
		cout<<"/";
		cin>>me;
		cout<<"/";
		cin>>te;
		cout<< " escriba tercera fecha\n";
		cin>> pi;
		cout<<"/";
		cin>>mi;
		cout<<"/";
		cin>>ti;
		gato.open ("Fechas.txt");
		gato<< "su primer fecha es:\n"<<pa<<"/"<<ma<<"/"<<ta;
		gato<< "\nsu segundo fecha es:\n"<<pe<<"/"<<me<<"/"<<te;
		gato<< "\nsu tercer fecha es:\n"<<pi<<"/"<<mi<<"/"<<ti;
		gato.close();
    break;
   
    case 3:
    	cout<<"\la hora es:\n";
    	time_t current_time;
        struct tm * time_info;
        char timeString[9];
 
        time(&current_time);
        time_info = localtime(&current_time);
 
       strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);
       puts(timeString);
       break;
   
    case 4:
   		cout<<"Promediar tus notas\n";
		cout<<"digite diez notas \n";
 	            cout<<"digite la primera	 nota\n" ;
                 	cin>>a;
	            cout<<"digite la segunda nota\n" ;
	                cin>>b;
	            cout<<"digite la tercera nota\n" ;
	                cin>>c;
	            cout<<"digite la cuarta nota\n" ;
	                cin>>d;
	            cout<<"digite la quinta nota\n" ;
                	cin>>e;
	            cout<<"digite la sexta nota\n" ;
	                cin>>f;
	            cout<<"digite la septima nota\n" ;
	                cin>>g;
				cout<<"digite la octava nota\n" ;
	                cin>>h;
				cout<<"digite la novena nota\n" ;
	                cin>>i;
				cout<<"digite la decima nota\n" ;
	                cin>>j;    
        	if (a, b, c, d, e, f, g, h, i, j>0 && a, b, c, d, e, f, g, h, i, j<8){
	        (k= a + b + c + d + e + f + g + h + i + j);
	        (l= k / 10);
	}
	        if (l<4){
	            cout<< "la materia no ha sido aprobada\n"<<l;
    
        	}else{
	            cout<< "la materia ha sido aprobada\n"<<l;
			 }
    	
    break;
    case 5:
    	e=1;
    break;
	}
	}
	return 0;
}
