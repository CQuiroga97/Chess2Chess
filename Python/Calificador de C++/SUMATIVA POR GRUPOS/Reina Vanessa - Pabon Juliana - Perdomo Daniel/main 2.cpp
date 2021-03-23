#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 using namespace std;
int main(int argc, char** argv) {
	string nombre;
	cout<<"\n Ingrese su nombre";
	cin>>nombre;
	char h = 205;
	char v = 186;
	int opcion = 0;
	int decision = 0;
	int a3 = 0;
	int b2 = 0;
	int plato = 0;
	int bandera = 0;
	int b7 = 0;
	int z = 0;
	while(bandera == 1){
	b2 = 0;
	cout<<"                 ";
	while (b2 <  47){
	cout<< a3;
	b2 = b2 + 1;
	}
	}
	while (b7==0){
		
	cout<<"\n                           "<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h;
	cout<<"\n                           "<<v<<"                BIENVENID@ A BIFES PARRILLA "   <<nombre<< "          "<<v;
	cout<<"\n                           "<<v<<"                      Seleccione una opcion                  "<<v;      
	cout<<"\n                           "<<v<<"                                                             "<<v;
	cout<<"\n                           "<<v<<" 1.  Ver horario de atencion                                 "<<v;
	cout<<"\n                           "<<v<<" 2.  Ver la carta del restaurante                            "<<v;
	cout<<"\n                           "<<v<<" 3.  Ordenar mi domicilio                                    "<<v;
	cout<<"\n                           "<<v<<" 4.  Total de mi cuenta                                      "<<v;
	cout<<"\n                           "<<v<<" 5.  Salir del menu                                          "<<v;
	cout<<"\n                           "<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h;
    cin>>opcion;
    
    switch (opcion){
    	case 1:
    		cout<<"  Estamos para servirle:";{
            cout<<"\n Lunes a Viernes entre 11:30am a 8:00pm";
            cout<<"\n Sabado y Domingo entre 12:00pm a 9:30pm"<<endl;
        }
        break; 
        case 2:
        	cout<<"  Menu ejecutivo:";{
        	cout<<"\n 1.Carne a la plancha acompanado de platano, papa, arroz,sopa,ensalada,jugo.";
            cout<<"\n 2.Pechuga a la plancha acompanado de platano, papa, arroz,sopa,ensalada,jugo.";
            cout<<"\n 3.Mojarra acompañada de platano, papa, arroz,sopa,ensalada,limonada.";
            cout<<"\n 4.Costillitas de cerdo acompanadas de platano, papa, arroz,sopa,ensalada,limonada.\n";
            cout<<"\n Comida rapida:";
        	cout<<"\n 5.Hamburguesa dos carnes acompanada de papa francesa y gaseosa 35.";
            cout<<"\n 6.Hamburguesa tres quesos acompanada de papa francesa y gaseosa 350ml.";
            cout<<"\n 7.Hamburguesa vegetariana acompanada de papa francesa y limonada. ";
            cout<<"\n 8.Perro caliente acompanado de salsas a su preferencia, queso y papas fosforito.\n";
		    cout<<"\n Adicionales:";
        	cout<<"\n 9.Porcion de arroz.";
            cout<<"\n 10.Porcion de papas.";
            cout<<"\n 11.Porcion de platano.";
            cout<<"\n 12.Limonada natural."<<endl;
		}
		break;
		case 3:
			cout<<" De acuerdo con nuestro menu, digite el numero del plato que desea ordenar";{
			cin>>plato;
			if(plato==1){
				cout<<"Usted ha ordenado: Carne a la plancha acompanado de platano, papa, arroz,sopa,ensalada,jugo.";}
			if(plato==2){
				cout<<"Usted ha ordenado: Pechuga a la plancha acompanado de platano, papa, arroz,sopa,ensalada,jugo.";}
			if(plato==3){
				cout<<"Usted ha ordenado: Mojarra acompanada de platano, papa, arroz,sopa,ensalada,limonada.";}
			if(plato==4){
				cout<<"Usted ha ordenado: Costillitas de cerdo acompanadas de platano, papa, arroz,sopa,ensalada,limonada.";}
			if(plato==5){
				cout<<"Usted ha ordenado: Hamburguesa dos carnes acompanada de papa francesa y gaseosa 350.";}
			if(plato==6){
				cout<<"Usted ha ordenado: Hamburguesa tres quesos acompanada de papa francesa y gaseosa 350ml.";}
			if(plato==7){
				cout<<"Usted ha ordenado: Hamburguesa vegetariana acompanada de papa francesa y limonada.";}
			if(plato==8){
				cout<<"Usted ha ordenado: Perro caliente acompanado de salsas a su preferencia, queso y papas fosforito.";}
			if(plato==9){
				cout<<"Usted ha ordenado: Porcion de arroz.";}
			if(plato==10){
				cout<<"Usted ha ordenado: Porcion de papas.";}
			if(plato==11){
				cout<<"Usted ha ordenado: Porcion de platano.";}
			if(plato==12){
				cout<<"Usted ha ordenado: Limonada natural.\n";}
			}
			break;
		case 4:
			cout<<"\n De acuerdo con nuestro menu digite el numero del plato que ha ordenado previamente";{
			cin>>plato;
			if(plato==1){
				cout<<"Usted ha ordenado: Carne a la plancha acompanado de platano, papa, arroz,sopa,ensalada,jugo\n El valor a pagar es 9K.";}
			if(plato==2){
				cout<<"Usted ha ordenado: Pechuga a la plancha acompanado de platano, papa, arroz,sopa,ensalada,jugo \n El valor a pagar es 9K.";}
			if(plato==3){
				cout<<"Usted ha ordenado: Mojarra acompanada de platano, papa, arroz,sopa,ensalada,limonada \n El valor a pagar es 9K.";}
			if(plato==4){
				cout<<"Usted ha ordenado: Costillitas de cerdo acompanadas de platano, papa, arroz,sopa,ensalada,limonada \n El valor a pagar es 9K.";}
			if(plato==5){
				cout<<"Usted ha ordenado: Hamburguesa dos carnes acompanada de papa francesa y gaseosa 350 \n El valor a pagar es 12K.";}
			if(plato==6){
				cout<<"Usted ha ordenado: Hamburguesa tres quesos acompanada de papa francesa y gaseosa 350ml  \n El valor a pagar es 9K.";}
			if(plato==7){
				cout<<"Usted ha ordenado: Hamburguesa vegetariana acompanada de papa francesa y limonada \n El valor a pagar es 10K.";}
			if(plato==8){
				cout<<"Usted ha ordenado: Perro caliente acompanado de salsas a su preferencia, queso y papas fosforito \n El valor a pagar es 6K.";}
			if(plato==9){
				cout<<"Usted ha ordenado: Porcion de arroz \n El valor a pagar es 3K.";}
			if(plato==10){
				cout<<"Usted ha ordenado: Porcion de papas  \n El valor a pagar 3K.";}
			if(plato==11){
				cout<<"Usted ha ordenado: Porcion de platano \n El valor a pagar es 3K.";}
			if(plato==12){
				cout<<"Usted ha ordenado: Limonada natural \n El valor a pagar es 3K.\n";}
			}
			break;
			cout<<"Feliz tarde, su pedido estara listo en unos minutos, te esperamos en una proxima ocasion, hasta luego";
		case 5: 
       		cout<<"salir :(";
       		bandera = 123;
       		b7 = 1;
       break;
   }
}
				return 0;
			}
          

