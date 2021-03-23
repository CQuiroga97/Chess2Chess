#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    int nmms =0;
	int mon = 0;
	int son =0;
	int alv= 0;
	char a=205;
	char a2=186;
    int b=0;
    int v;
	int z=0;
    while(nmms ==0){
    	b=0;
    cout<<"\n                    ";
    while (b<50){
    	cout<<a;
    	b=b+1;
	}
	cout <<"\n                   "<<a2<<"Bienvenid@ a Your Light, te sientes solo?, quieres "<<a2;
	cout <<"\n                   "<<a2<<"saber que te depara el futuro? encontraste el lugar"<<a2;
	cout <<"\n                   "<<a2<<" correcto.                                         "<<a2;
	cout <<"\n                   "<<a2<<" 1. Mi horoscopo                                   "<<a2;
	cout <<"\n                   "<<a2<<" 2. Hechizos de amor                               "<<a2;
	cout <<"\n                   "<<a2<<" 3. Sobre mi futuro                                "<<a2;
	cout <<"\n                   "<<a2<<" 4. Registrate para recibir notificaciones         "<<a2;
	cout <<"\n                   "<<a2<<" 5. Para ver productos                             "<<a2;
	cout <<"\n                   "<<a2<<" 6. Finalizar                                      "<<a2;
	b = 0;
	cout<<"\n                    ";
	while (b<50){
	
		cout<<a;
		b=b+1;
    }
		cout<<"\n";
	    cin>>nmms;
		switch(nmms){
			case 1:
			cout << "Mi Horoscopo\n";
			cout << "que signo eres?\n";
			cout<<" Si eres Aries presiona el numero 6 \n";
            cout<<" Si eres tauro presiona el numero 7 \n";
           	cout<<" Si eres geminis presiona el numero 8 \n";
	        cout<<" Si eres cancer presiona el numero 9\n";
		    cout<<" Si eres leo presiona el numero 10\n";
		    cout<<" Si eres virgo presiona el numero 11\n";
		    cout<<" Si eres libra presiona el numero 12\n";
		    cout<<" Si eres escorpio presiona el numero 13\n";
		    cout<<" Si eres sagitario presiona el numero 14\n";
		    cout<<" Si eres capricornio presiona el numero 15\n";
		    cout<<" Si eres acuario presiona el numero 16\n";
		    cout<<" Si eres piscis presiona el numero 17\n";
		    
     	cin>>mon;
	    	switch(mon){
	    		
	
		case 6:
	    int q;
			cout<<"Horoscopo aries, digita tu edad\n";
			cin>> q;
			cout<<"Cambia las rutinas de durante la semana y aprovecha para dedicarte a tus aficiones favoritas. Recuerda que en época normal, si los planes previstos no se cumplen, siempre buscas otra salida para pasarlo bien, para que todos se diviertan. ";
	        system("pause");
			break;
	       
		case 7:
		int w;
			cout<<"Horoscopo tauro, digita tu edad\n";
		    cin>> w;
			cout<<"Estás en buena forma, pese a todos los inconvenientes del confinamiento, ya superados algunos problemillas que surgieron durante la semana, vuelves a tener salud y energía a raudales. Se te nota en tu forma de hablar y de estar activa. Precisamente por esto, porque eres la viva imagen de la fortaleza";
	        system("pause");   
		    break;
	    case 8:  
		
		int e;
			cout<<"Horoscopo geminis, digita tu edad\n";
			cin>> e;
			cout<<"Tus circunstancias te hacen evadir de la vida real. Estás viendo todo lo que concierne a tu propia vida como si fuera una película, con personajes ficticios. Y, claro, tú misma te montas el argumento, a tu medida, pero como te gusta sufrir, el film es de género drama, acaba siendo un desastre, sobre todo para mantener un buen estado de ánimo";
		    system("pause");
			break;
		  
		case 9:
		int r;
			cout<<"Horoscopo cancer, digita tu edad\n";
		    cin>> r;
			cout<<"Aunque sea domingo hoy puedes recibir una llamada respecto a un asunto de trabajo. Atiéndela porque es algo importante que puede repercutir enormemente en tu futuro y también en tu bolsillo. No es cosa de dejarlo pasar como si nada, o pensando que ahora todo está frenado.";
	        system("pause");
			break;
	    
		case 10:
	    int t;
			cout<<"Horoscopo leo, digita tu edad\n";
		    cin>> t;
			cout<<"Hoy no es un buen día para tratar temas relacionados con el dinero. Si has de hacer un presupuesto es mejor que lo dejes para mañana porque hoy no tienes suficiente claridad mental para estos temas.";
	        system("pause");
			 break;
	
		case 11:
		int y;
			cout<<"Horoscopo virgo, digita tu edad\n";
		    cin>> y;
			cout<<"Pocas veces hay ocasión de empezar de nuevo prácticamente de cero en algunos temas que te han causado problemas y preocupaciones, pero hoy tu conjunción astral te brinda esta oportunidad como el mejor regalo";
		   system("pause");
		     break;
	   
		case 12:
		int u;
			cout<<"Horoscopo libra, digita tu edad\n";
		    cin>> u;
			cout<<"Este dia tendrás tiempo para dedicarlo a cosas de índole intelectual que te interesan mucho. Tal vez te decidas a leer un libro, a estudiar o a poner sobre el papel algún proyecto de los que te rondan por la cabeza desde hace tiempo";
		   system("pause");
		     break;
		case 13:
		int i;
			cout<<"Horoscopo escorpio, digita tu edad\n";
            cin>> i;		
			cout<<"Estás deseando progresar, que haya cambios positivos en tu vida y de hecho los hay, sobre todo en los últimos días. Algunos los has sabido apreciar pero otros no tanto";
	        system("pause");
			 break;
	    
		case 14:
		int o;
			cout<<"Horoscopo sagitario, digita tu edad\n";
		    cin>> o;
			cout<<"Si has conseguido relajarte, hoy tendrás la mente muy despejada y tu ‘parabólica’ funcionará de maravilla. Aprovecha y sigue los dictados de tu intuición, que te pueden llevar por caminos de lo más insospechados pero siempre muy fructíferos.";
	        system("pause");
			 break;
	    
		case 15:
		int p;
			cout<<"Horoscopo capricornio, digita tu edad\n";
		    cin>> p;
			cout<<"Ha llegado el día en que puedes mejorar a niveles óptimos tu relación de pareja. Esto será especialmente relevante si estás conviviendo con tu chico.";
		    system("pause"); 
			 break;
	    
		case 16:
		int s;
			cout<<"Horoscopo acuario, digita tu edad\n";
		    cin>> s;
			cout<<"Tu día de descanso hoy será ligeramente distinto a como lo habías previsto. Las circunstancias te llevarán a echar una mano a alguien de tu casa, de tu familia o del círculo más amplio de tus amistades";
	        system("pause");
			break;
	    
		case 17:
		int d;
			cout<<"Horoscopo piscis, digita tu edad\n";
		    cin>> d;
			cout<<"Hoy has vuelto a ser tú misma, se te han pasado las neuras y estás en tu fase zen, relajada y tranquila. Y ahora ves que todas las cosas tienen mejor solución cuando las piensas y las resuelves con calma";						
	        system("pause");
			 break;
		}
		
	    	
		case 2:
			int f;
			cout << "hechizos de amor\n cuando el ser amado se aleja se sufre de desesperacion, crisis emocional,falta de sueño y energia, queremos que te\n sientas bien y por esa razon te dejaremos algunos alternativas para usar en tu ser amado en caso de no ceder a tu amor >:D\n elige el que te interese ;v oprimiendo 1, 2 o 3\n";
			cout << "amarre\nconjuros de amor\n agua de calzon \n";
			cin>> f;
			cout<< "por motivos de salud y bienestar a mi compu no dejaremos la informacion aqui, sin embargo pueden dirigirse a esta pagina: https://amarresdeamoryendulzamientos.com/?gclid=CjwKCAjw4pT1BRBUEiwAm5QuRzluMsqCuNClNOgKzR9S4J_Arvd9sm3kY0vNkVIb7bQxSmpHzme6xxoCArQQAvD_BwE";
			system("pause");
			break;
	
	    	
		case 3:
			int g;
			cout << "Sobre mi futuro\ digita en que año naciste";
			cin>> g;
			cout << "El futuro tiene muchos nombres. Para los debiles es lo inalcanzable. Para los temerosos, lo desconocido. Para los valientes es la oportunidad.Solo cerrando las puertas detras de uno se abren ventanas hacia el porvenir.";
		    system("pause");
			break;
		case 5:
           cout<<"ingrese 1 para:blusa"<<endl;
           cout<<"ingrese 2 para:camiseta"<<endl;
           cout<<"ingrese 3 para:pantalon"<<endl;
           cout<<"ingrese 4 para:saco"<<endl;
           cout<<"ingrese 5 para:buso "<<endl;
           cout<<"ingrese 6 para:pantaloneta"<<endl;
           cin>>son;
	    	switch(son){
				case 1:

cout<<"este producto se encuentra en las sedes A y c\n";
cout<<"este producto se encuentra disponible en 8 unidades \n";
cout<<"este producto tiene un valor de 30.000 \n";
cout<<"Para hacer tu pedido dirigete a: https//tiendaalv.com.co";
system("pause");
break;
case 2:


cout<<"este producto se encuentra en la caja 2"<<endl;
cout<<"este producto se encuentra disponible en 12 unidades "<<endl;
cout<<"este producto un valor de 12.000 por unidad "<<endl;
cout<<"Para hacer tu pedido dirigete a: https//tiendaalv.com.co\n" ;
system("pause");
break;
   case 3:
cout<<"este producto se encuentra en la sede A,B"<<endl;
cout<<"este producto se encuentra disponible en 7 unidades "<<endl;
cout<<"este producto un valor de 78.000 por unidad "<<endl;
cout<<"Para hacer tu pedido dirigete a: https//tiendaalv.com.co\n" ; 
system("pause");
break;
case 4:
cout<<"este producto se encuentra en la sede A, B y C"<<endl;
cout<<"este producto se encuentra disponible en 9 unidades "<<endl;
cout<<"este producto un valor de 38.000 por unidad "<<endl;
cout<<"Para hacer tu pedido dirigete a: https//tiendaalv.com.co\n";
break;
case 5:

cout<<"este producto se encuentra en la sede C y D"<<endl;
cout<<"este producto se encuentra disponible en 8 unidades "<<endl;
cout<<"este producto un valor de 90.000 por unidad "<<endl;
cout<<"Para hacer tu pedido dirigete a: https//tiendaalv.com.co\n";
system("pause");
break;
case 6:

cout<<"este producto se encuentra en la sede A Y B"<<endl;
cout<<"este producto se encuentra disponible en 28 unidades "<<endl;
cout<<"este producto un valor de 48.000 por unidad "<<endl;
cout<<"Para hacer tu pedido dirigete a: https//tiendaalv.com.co\n";
system("pause");
break;
}
           
	        
		case 6:
		    
	    	nmms=145;
				break;
			
			
		case 4:
				cout << "registrarse\n ";
            	string correo;
	            string usuario;
	            string contra;

	            cout<<"Por favor ingresa tu correo electronico\n";
            	cin>> correo;
            	ofstream archivo;
            	archivo.open ("daticos.txt");
                archivo<< "Correo electronico: \n" <<correo;
            	archivo.close();
	
            	cout << "Por favor ingresa un nombre de usuario\n";
            	cin >> usuario;
            	archivo.open("daticos2.txt");
                archivo << "Nombre de usuario: \n" <<usuario;
            	archivo.close();
	
                cout << "Por favor ingresa una contraseña\n";
            	cin >> contra;
            	archivo.open("daticos3.txt");
            	archivo << "Contraseña: \n" <<contra;
            	archivo.close();
			    break;
    
	     	
		}
		system ("cls");
	}
	
	return 0;
}

	
