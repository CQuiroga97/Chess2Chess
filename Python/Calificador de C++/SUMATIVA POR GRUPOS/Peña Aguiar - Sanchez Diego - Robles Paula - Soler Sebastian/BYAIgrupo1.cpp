#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <time.h>


#define LIM 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
 	 time_t t;
     struct tm *tm;
     char fechayhora[100];
     char * meses[12]= {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

      t=time(NULL);
      tm=localtime(&t);
     printf ("Hoy es: %02d/%s/%d\n", tm->tm_mday, meses[tm->tm_mon], 1900+tm->tm_year);
	
	time_t current_time;
    struct tm * time_info;
    char timeString[9];
 
    time(&current_time);
    time_info = localtime(&current_time);
 
    strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);
    puts(timeString);
	
	
	int flag =0;
	int opt= 0;
	char a=205;
	char a2=186;
    int b=0;
    int z=0;
    
    while(flag ==0){
    	b=0;
    cout<<"\n             ";
    while (b<53){
    	cout<<a;
    	b=b+1;
	}
	cout <<"\n            "<<a2<<"   Bienvenido a BYAI, como estas el dia de hoy?      "<<a2;
	cout <<"\n            "<<a2<<" Recuerda que todas las respuestas son en minuscula  "<<a2;
	cout <<"\n            "<<a2<<" 1. Eres un miembro nuevo? Registrate                "<<a2;
	cout <<"\n            "<<a2<<" 2. Como te sientes el dia de hoy?                   "<<a2;
	cout <<"\n            "<<a2<<" 3. QUESTIONS                                        "<<a2;
	cout <<"\n            "<<a2<<" 4. Diario de Suenos                                 "<<a2;
	cout <<"\n            "<<a2<<" 5. Introduce tu numero para informacion extra       "<<a2;
	cout <<"\n            "<<a2<<" 6. Descubre tu signo solar                          "<<a2;
	cout <<"\n            "<<a2<<" 7. Finalizar                                        "<<a2;
	b = 0;
	cout<<"\n             ";
	while (b<53){
		cout<<a;
		b=b+1;
	}
		cout<<"\n";
		cin>>opt;
		switch(opt){
			case 1:
				{ 
				char selection;
				const char* yes = "si";
                const char* no = "no";
				char nombre [200];
				int edad;
				char genero [200];
				
				string input; 
				
				cout <<"Bienvenido, es tu primera vez? (si o no)\n ";
				cin>>input;
				if (input == "si"){
				cout <<"vamos a empezar!\n";
				{
				ofstream gatos;	
				cout << "como te llamas?\n"<<endl;
				cin>>nombre;
				gatos.open("gatitos.txt");
	            gatos<<"nombre \n\n"<<nombre;
				cout<<nombre<< ", cuantos anhos tienes?\n"<<endl;
				cin>> edad;
	            gatos<<"edad\n"<<edad;
				cout<<nombre <<", cual es tu genero?\n"<<endl;
				cin>>genero;
	            gatos<<"Su genero es\n"<<genero;
            	gatos.close();
            	}
				cout <<"ten una linda experiencia!\n";
				system ("pause"); }
			 else if (input == "no"){
				cout<<"oh no:(";
				system ("pause");
			}
			}
			    break;
			case 2:
				{
				int pipi = 0;
				 while(flag ==0){
             	b=0;
                 cout<<"\n             ";
                 while (b<53){
             	cout<<a;
    	         b=b+1;
              	}
             	cout <<"\n            "<<a2<<"   Hola,  como te sientes hoy?                       "<<a2;
             	cout <<"\n            "<<a2<<" Recuerda que todas las respuestas son en minuscula  "<<a2;
             	cout <<"\n            "<<a2<<" 1. Excelente                                        "<<a2;
             	cout <<"\n            "<<a2<<" 2. Bien                                             "<<a2;
             	cout <<"\n            "<<a2<<" 3. No muy bien                                      "<<a2;
             	cout <<"\n            "<<a2<<" 4. Mal                                              "<<a2;
             	cout <<"\n            "<<a2<<" 5. Horrible                                         "<<a2;
             	b = 0;
             	cout<<"\n             ";
                 while (b<53){
	          	cout<<a;
	         	b=b+1;
	            }
		        cout<<"\n";
		        cin>>pipi;
		         switch(pipi){
		         	case 1:
		         		{const char* si = "si";
                         const char* no = "no";
		         		string algo; 
		         		string eso;
		         		cout <<"Te sientes excelente? Me alegra mucho!\n";
		         		cout << "Hiciste algo interesante hoy?\n";
		         		cin>>algo;
		         		if (algo == "si"){
		         			{ ofstream pedro;
							 cout <<"Cuentame sobre eso\n";
		         			cin>>eso;
		         			cout<< "yA, que interesante!\n";
		         			system ("pause");
		         			pedro.open("todaysmood.txt");
		         			pedro<<"mood\n"<<eso;
		         			pedro.close();
						}
		         			
						 } else if (algo == "no"){
						 	cout <<"Oh, eso tambien es bueno!\n";
						 	cout << "Recuerda lavarte las manos y tomar agua\n";
						 	cout << "Cuidate mucho!\n";
						 	system ("pause");
						 }
						 
						 }
		         		break;
		         	case 2:
		         		{
		         			cout<< "                        Te sientes bien? Que bueno!\n\n ";
		         			cout << "         RECUERDA          \n";
		         			cout <<"          Solo vive como quieras, tu vida es tuya. No intentes tan duro, esta bien perder\n\n";
		         			system ("pause");
						 }
		         		break;
		         	case 3:
		         		{
						 string sentir;
						 string yohoy;
						 const char* si = "si";
                         const char* no = "no";
		         		cout<< "                        No te sientes muy bien? Oh no...\n\n  ";
		         		cout <<"           Sucedio algo? (Si o no)                          \n";
		         		cin>>sentir;
		         		if (sentir =="si"){
						 
		         		cout<< "\n         Que paso?                                        \n";
		         		cin>>yohoy;
		         		cout <<"Oh no... que feo, todo va a estar bien\n\n";
		         			cout << "\n         RECUERDA          \n";
		         			cout <<"         Te esperan cosas buenas, solo resiste y manten la fe \n";
		         			cout<< "         Solo vive como quieras, tu vida es tuya. No intentes tan duro, esta bien perder\n\n";
		         			system ("pause");
						} else if (sentir == "no"){
							cout <<"Oh no... Esta bien, todo va a estar bien\n\n";
							cout << "           RECUERDA          \n";
		         			cout <<"            Te esperan cosas buenas, solo resiste y manten la fe\n\n";
						}
		         		}
		         		break;
		         	case 4:
					 {
		         		string sent;
						string yoh;
						const char* si = "si";
                        const char* no = "no";
		         		cout<< "                        Te sientes mal? Oh no :(\n\n  ";
		         		cout <<"           Sucedio algo? (Si o no)                          \n";
		         		cin>>sent;
		         		if (sent =="si"){
						 
		         		cout<< "\n         Que paso?                                        \n";
		         		cin>>yoh;
		         		cout <<"Oh no... que feo, todo va a estar bien\n\n";
		         			cout << "\n         RECUERDA          \n";
		         			cout <<"         Te esperan cosas buenas, solo resiste y manten la fe \n";
		         			cout<< "         Solo vive como quieras, tu vida es tuya. No intentes tan duro, esta bien perder\n\n";
		         			system ("pause");
						} else if (sent == "no"){
							cout <<"Oh no... Esta bien, todo va a estar bien\n\n";
							cout << "           RECUERDA          \n";
		         			cout <<"            Te esperan cosas buenas, solo resiste y manten la fe\n\n";
		         			
				         }
				     }
		         		break;
		         	case 5:
		         		{
		         		string senti;
						 string yoho;
						 const char* si = "si";
                         const char* no = "no";
		         		cout<< "                        Te sientes horrible? Oh no...\n\n  ";
		         		cout <<"           Sucedio algo? (Si o no)                          \n";
		         		cin>>senti;
		         		if (senti =="si"){
						 
		         		cout<< "\n         Que paso?                                        \n";
		         		cin>>yoho;
		         		cout <<"Oh no... que feo, todo va a estar bien\n\n";
		         			cout << "\n         RECUERDA          \n";
		         			cout <<"         Te esperan cosas buenas, solo resiste y manten la fe \n";
		         			cout<< "         Solo vive como quieras, tu vida es tuya. No intentes tan duro, esta bien perder\n\n";
		         			system ("pause");
						} else if (senti == "no"){
							cout <<"Oh no... Esta bien, todo va a estar bien\n\n";
							cout << "           RECUERDA          \n";
		         			cout <<"            Te esperan cosas buenas, solo resiste y manten la fe\n\n";
						 }
					}
		         		break;
		         system ("cls");		
		         } 
		         
		     break;
		 }
	}
			case 3:
				{
				 char selections;
				string papas;
				string continuar;
				string eoi;
				string eoif;
				string pg;
				string mas;
				string masi;
				string pas;
				string pasi;
				string seope;
				char sol[200]; 
				char e [200];
				char i [200];
				char p [200];
				char a [200];
				char peli [200];
				char album [200];
				char band [200];
				const char* yesir = "series";
				const char* yesira = "peliculas";
				const char* yesi = "netflix";
				const char* ninia = "spotify";	
				const char* yes = "p";
				const char* nini = "g";		
				const char* si = "si";
                const char* no = "no";
			     cout <<"                 QUESTIONS\n";
				cout <<"    te gusta el te? (si o no)\n";
				cin>> papas;
				if (papas == "si"){
					cout <<"     Cual es tu pelicula favorita (solo uno)\n";
					cin>>peli;
					cout <<"     Que buena pelicula!\n";
				} else if (papas == "no"){
					cout<< "     Cual es tu album favorito (solo uno)\n";
					cin>>album;
					cout<< album<< "     En relidad es un buen album! (solo uno)\n";
					
				}
				cout<<"     \nDeseas continuar?\n";
				cin>>continuar;
				if (continuar== "si"){
					cout <<"     Gatos o Perros, escribe g por gatos y p por perros\n";
					cin>>pg;
					if (pg == "p"){
						cout<< "     Cual es tu actor favorito? (solo uno)\n";
						cin>>sol;
						cout<< "     WOOO, de verdad  "<<sol<< " nosotros lo/a amamos!\n";
						
					}else if (pg == "g"){
						cout<< "     Cual es tu cantante o banda favorita? (solo uno)\n";
						cin>>band;
						cout<< band<< " De verdad? " <<band<< " tambien es mi favorito";
						
					}
				} else if (continuar == "no") {
					cout <<"     Esta bien:c espero hayas disfrutado!\n";
					system ("pause");
				} cout <<"    \n Otra mas? \n";
				cin>>mas;
				if (mas == "si"){
					cout <<"     Extrovertido o introvertido, i para introvertido y e para extrovertido\n";
					cin>>eoi;
					if (eoi== "e"){
						cout<< "     Cual es tu libro favorito? (solo uno)\n";
						cin>>p;
						
					}else if (eoi == "i"){
						cout<< "     Cual es tu red social favorita? (solo uno)\n";
						cin>>a;
						
					}
				} else if (mas == "no") {
					cout <<"     Esta bien:c espero hayas disfrutado!\n";
					system ("pause");
				} cout <<"     Siguiente o no:(   (si o no)\n";
				cin>>masi;
				if (masi == "si"){
					cout <<"     Quieres una recomendacion?\n";
					cin>>eoif;
					if (eoif== "si"){
						cout<< "     netflix o spotify \n";
						cin>>pas;
						if (pas == "netflix"){
							cout <<"     series o peliculas?\n";
							cin>> seope;
							if (seope == "peliculas"){
							
							cout <<"            peliculas           \n ";
							cout <<" Your Name                       \n";
							cout <<" Coco                            \n";
							cout <<" Parasite                        \n";
							cout <<" Lalaland                        \n";
							cout <<" Mean Girls                      \n";
						    cout <<" 100 things I hate about you     \n";
						    cout<< "\n";
						    system ("pause");
						} else if (seope== "series" ){
							cout <<"            series               \n ";
							cout <<" Brooklyn nine nine               \n";
							cout <<" On my block                      \n";
							cout <<" Jane the virgin                  \n";
							cout <<" Euphoria                         \n";
							cout <<" Bojack horseman                  \n";
						    cout <<" One day at a time                \n";
						    cout <<" Atypical                         \n";
						cout<<"\n";
						system ("pause");
						}
						} else if ( pas == "spotify"){
							cout <<"           canciones               \n";
							cout <<" Figures ¬ Jessie Reyes            \n";
							cout <<" Con el viento ¬ Jessie Reyes      \n";
							cout <<" These Days ¬ Wallows              \n";
							cout <<" Cien anos ¬ Pedro Infante         \n";
							cout <<" Gimme Love ¬ Joji                 \n";
							cout << " So What ¬ loona                   \n";
							cout <<" Bad Boy ¬ Red Velvet              \n";
							cout <<" Fancy ¬ Twice                     \n";
						cout<<"\n";
						system ("pause");
						}
						cout << "     eso ha sido todo por hoy! ten un lindo dia, \n";
						cout << "     no vemos pronto. Recuerda tomar agua y lavarte las manos\n ";
						
					}else if (eoif == "no"){
						cout<< "     Esta bien:c espero hayas disfrutado!\n";
						system ("pause");
					}
				} else if (masi == "no") {
					cout <<"Esta bien:c espero hayas disfrutado!";
					system ("pause");
				} 
				}
				break;
			case 4:
				{ 
				string sueno;
				int a;
				char e [200];
				int o;
				
    	         cout <<"\n            "<<a2<<"          Bienvenido al diario de suenos        "<<a2;
    	         cout <<"\n            "<<a2<<"               Que sonaste hoy?                 "<<a2;
    	         cout <<"\n            "<<a2<<" No olvides dar el mayor numero de detalles     "<<a2;
                
		        cout<<"\n";
		        {
				ofstream suenos;
		         cout<< "\n Introduce el dia\n";
		         cin>>a;
		         cout<< "Introduce mes\n";
		         cin>>e;
		         cout << "Introduce el año\n";
		         cin>> o;
		         cout<< "El "<<a<< " de "<< e << " del "<<o<<" sone que ";
		         cin>>sueno;
		        suenos.open("suenos1.txt");
		        suenos<<"sueno\n"<<sueno;
		        suenos.close();
		    }
				}
			
				break;
			case 5:
				{
				 int telefono;
                 cout << "numero de telefono!\n";
                  cout<<"introduzca por favor su numero de telefono\n";
                 cin>>telefono;
                 if (telefono<=10){
                 cout << "gracias!";
				 }
				 else if(telefono>10){
                  cout<<"error, imposible introducir un numero con mas de 10";
                 system("pause");
                 }
				}

			break; 
			case 6:
			{
					int mes, dia;
      cout<<"\t\t\tSIGNO ZODIACAL"<<endl;
      cout<<"(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril"<<endl;
      cout<<"(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto"<<endl;
      cout<<"(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre"<<endl<<endl;
      cout<<"Ingrese la fecha de su cumplea"<<char(164)<<"o (dia y mes)"<<endl;
      cin>>dia>>mes;
      switch(mes)
      {
 
            case 1:
                switch(dia)
                {
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"acuario"<<endl;break;
                default:cout<<"capricornio"<<endl;}break;
            case 2:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"piscis"<<endl;break;
                default:cout<<"acuario"<<endl;break;}break;
            case 3:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"aries"<<endl;break;
                default:cout<<"piscis"<<endl;break;}break;
            case 4:
                switch(dia){
                   case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"tauro"<<endl;break;
                   default:cout<<"aries"<<endl;break;}break;
            case 5:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"geminis"<<endl;break;
                default:cout<<"tauro"<<endl;break;}break;
 
            case 6:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"cancer"<<endl;break;
                default:cout<<"geminis"<<endl;break;}break;
            case 7:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"leo"<<endl;break;
                default:cout<<"cancer"<<endl;break;}break;
            case 8:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"virgo"<<endl;break;
                default:cout<<"leo"<<endl;break;}break;
            case 9:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"libra"<<endl;break;
                default:cout<<"virgo"<<endl;break;}break;
            case 10:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"escorpio"<<endl;break;
                default:cout<<"libra"<<endl;break;}break;
            case 11:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"sagitario"<<endl;break;
                default:cout<<"escorpio"<<endl;break;}break;
            case 12:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"capricornio"<<endl;break;
                default:cout<<"sagitario"<<endl;break;}break;
 
      }
 
cin.ignore();return 0;
}

				break;
	
			case 7:
				flag=145;
				break;
     	}
     	system ("cls");
	}

	return 0;
}




