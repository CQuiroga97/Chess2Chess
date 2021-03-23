#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <locale.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
    string palabra;
    cout<<"Digite su usuario: ";
    cin>>palabra;
  	char a=205;
	char b=186;
	int c=0;
void alarma (int segundos);
void escribir();

	
		cout<<"               ";     
	while( c < 50 ){
		cout<<a;
		c = c + 1;		
		
	} 
	c = 0;
	cout<<"\n                            BIENVENIDO "<<palabra<<"         ";
	cout<<"\n               "<<b<<"  Selccione una opcion:                         "<<b;
	cout<<"\n               "<<b<<"1.Calendario 2020                               "<<b; 
	cout<<"\n               "<<b<<"2.Fechas importantes 2020                       "<<b;
	cout<<"\n               "<<b<<"3.Cronometro                                    "<<b;
	cout<<"\n               "<<b<<"4.Contactos y datos                             "<<b;
	cout<<"\n               "<<b<<"5.Salir                                         "<<b;
    cout<<"\n               ";
    
    
    while(c < 50){
    	
    	cout<<a;
    	c = c + 1;
	}
		
		
	cout<<"\n";
	cin>>c;
	switch(c){
		case 1:
	          
			cout<<"\nBienvenido al calendario 2020";
			
    cout<<"\n";					
	cout<<"\n       "<<b<<"Enero                                 "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab           "<<b;
	cout<<"\n       "<<b<<"             1    2   3   4           "<<b;
	cout<<"\n       "<<b<<"5   6   7    8    9   10  11          "<<b;
	cout<<"\n       "<<b<<"12  13  14   15   16  17  18          "<<b;
	cout<<"\n       "<<b<<"19  20  21   22   23  24  25          "<<b;
	cout<<"\n       "<<b<<"26  27  28   29   30  31              "<<b;
	cout<<"\n";
					
	cout<<"\n       "<<b<<"Febrero                               "<<b; 
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab           "<<b;
	cout<<"\n       "<<b<<"                         1            "<<b;
	cout<<"\n       "<<b<<"2   3   4    5   6   7   8            "<<b;
	cout<<"\n       "<<b<<"9   10  11   12  13  14  15           "<<b;
	cout<<"\n       "<<b<<"16  17  18   19  20  21  22           "<<b;
	cout<<"\n       "<<b<<"23  24  25  26  27  28   29           "<<b;
	cout<<"\n       "<<b<<"30  31                                "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Marzo                                 "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab           "<<b;
	cout<<"\n       "<<b<<"1    2   3   4   5   6   7            "<<b;
	cout<<"\n       "<<b<<"8    9   10  11  12  13  14           "<<b;
	cout<<"\n       "<<b<<"15   16  17  18  19  20  21           "<<b;
	cout<<"\n       "<<b<<"22   23  24  25  26  27  28           "<<b;
	cout<<"\n       "<<b<<"29   30  31                           "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Abril                                 "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab           "<<b;
	cout<<"\n       "<<b<<"        1    2   3   4   5            "<<b;
	cout<<"\n       "<<b<<"6   7   8    9   10  11  12           "<<b;
	cout<<"\n       "<<b<<"13  14  15   16  17  18  19           "<<b;
	cout<<"\n       "<<b<<"20  21   22   23  24  25 26           "<<b;
	cout<<"\n       "<<b<<"27  28   29   30                      "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Mayo                                  "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab           "<<b;
	cout<<"\n       "<<b<<"                    1    2            "<<b;
	cout<<"\n       "<<b<<"3   4   5   6   7    8    9           "<<b;
	cout<<"\n       "<<b<<"10  11  12  13  14   15   16          "<<b;
	cout<<"\n       "<<b<<"17  18  19  20  21   22   23          "<<b;
	cout<<"\n       "<<b<<"24  25  26  27  28   29   30          "<<b;
	cout<<"\n       "<<b<<"31                                    "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Junio                                  "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab            "<<b;
	cout<<"\n       "<<b<<"    1    2   3   4   5   6             "<<b;
	cout<<"\n       "<<b<<"7   8    9   10  11  12  13            "<<b;
	cout<<"\n       "<<b<<"14  15   16  17  18  19  20            "<<b;
	cout<<"\n       "<<b<<"19  20   21   22  23  24  25           "<<b;
	cout<<"\n       "<<b<<"28  29   30                            "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Julio                                  "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab            "<<b;
	cout<<"\n       "<<b<<"             1    2   3   4            "<<b;
	cout<<"\n       "<<b<<"5   6   7    8    9   10  11           "<<b;
	cout<<"\n       "<<b<<"12  13  14   15   16  17  18           "<<b;
	cout<<"\n       "<<b<<"19  20  21   22   23  24  25           "<<b;
	cout<<"\n       "<<b<<"26  27  28   29   30  31               "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Agosto                                 "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab            "<<b;
	cout<<"\n       "<<b<<"                         1             "<<b;
	cout<<"\n       "<<b<<"2   3   4    5   6   7   8             "<<b;
	cout<<"\n       "<<b<<"9   10  11   12  13  14  15            "<<b;
	cout<<"\n       "<<b<<"16  17  18   19  20  21  22            "<<b;
	cout<<"\n       "<<b<<"23  24  25  26  27  28   29            "<<b;
	cout<<"\n       "<<b<<"30  31                                 "<<b;
	cout<<"\n";
	 
	cout<<"\n       "<<b<<"Septiembre                             "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab            "<<b;
	cout<<"\n       "<<b<<"        1    2   3   4   5             "<<b;
	cout<<"\n       "<<b<<"6   7   8    9   10  11  12            "<<b;
	cout<<"\n       "<<b<<"13  14  15   16  17  18  19            "<<b;
	cout<<"\n       "<<b<<"20  21   22   23  24  25 26            "<<b;
	cout<<"\n       "<<b<<"27  28   29   30                       "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Octubre                                "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab            "<<b;
	cout<<"\n       "<<b<<"                 1    2   3            "<<b;
	cout<<"\n       "<<b<<"4   5   6   7    8    9   10           "<<b;
	cout<<"\n       "<<b<<"11  12  13  14   15   16  17           "<<b;
	cout<<"\n       "<<b<<"18  19  20  21   22   23  24           "<<b;
	cout<<"\n       "<<b<<"25  26  27  28   29   30  31           "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Noviembre                              "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab            "<<b;
	cout<<"\n       "<<b<<"1    2   3   4   5   6   7             "<<b;
	cout<<"\n       "<<b<<"8    9   10  11  12  13  14            "<<b;
	cout<<"\n       "<<b<<"15   16  17  18  19  20  21            "<<b;
	cout<<"\n       "<<b<<"22   23  24  25  26  27  28            "<<b;
	cout<<"\n       "<<b<<"29   30  31                            "<<b;
	cout<<"\n";
	
	cout<<"\n       "<<b<<"Diciembre                              "<<b;
	cout<<"\n       "<<b<<"Dom Lun Mar Mie Jue Vie Sab            "<<b;	
	cout<<"\n       "<<b<<"        1    2   3   4   5             "<<b;
	cout<<"\n       "<<b<<"6   7   8    9   10  11  12            "<<b;
	cout<<"\n       "<<b<<"13  14  15   16  17  18  19            "<<b;
	cout<<"\n       "<<b<<"20  21  22   23  24  25 26             "<<b;
	cout<<"\n       "<<b<<"27  28  29   30                        "<<b;
	cout<<"\n";
    cout<<"\n               ";
	
			
		
		
			break;
		case 2:
			setlocale(LC_CTYPE, "Spanish");
			cout<<"fechas importante del año";
			cout<<"\n";
			cout<<"Enero 1: Año nuevo\n";
			cout<<"Enero 6: Festivo día de Reyes Magos\n";
			cout<<"Marzo 20: Festivo día de San José\n";
			cout<<"Abril 5: Domingo de Ramos\n";
			cout<<"Abril 9: Jueves Santo\n";
			cout<<"Abril 10: Viernes Santo\n";
			cout<<"Abril 12: Domingo de Pascua o Resurrección\n";
			cout<<"Mayo 1: Dia del trabajo\n";
			cout<<"Mayo 10:Dia de la madre\n";
			cout<<"Mayo 25: Festivo día de la Ascensión\n";
			cout<<"Junio 15: Festivo día de Corpus Christi\n";
			cout<<"Junio 21: Día del Padre\n";
			cout<<"Junio 22: Festivo día del Sagrado Corazón de Jesús\n";
			cout<<"Junio 29: Festivo día de San Pedro y San Pablo\n";
			cout<<"Julio 20: Día de la independencia\n";
			cout<<"Agosto 7: Batalla de Boyacá\n";
			cout<<"Agosto 17: Festivo por la Asunción de la Virgen\n";
			cout<<"Octubre 12: Festivo por el Día de la Raza\n";
			cout<<"Octubre 31: Halloween\n";
			cout<<"Noviembre 2: Festivo por el día de todos los Santos\n";
			cout<<"Noviembre 16: Festivo por la Independencia de Cartagena\n";
			cout<<"Diciembre 7: Día de las velitas\n";
			cout<<"Diciembre 8: Inmaculada Concepción\n";
			cout<<"Diciembre 25: Navidad\n";
			cout<<"\n";
			cout<<"Disfruta! :)\n";
			cout<<"\n";
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
			break;
			
	    case 3:
	    int main(); {
		
			 int segundos=0;
			 int minutos = 0; 
			 int horas=0;
			 
		
			 cout<<"\nBienvenido a la Cronometro";
			 cout<<"\n";
			printf("iniciar: ");
			system("pause -> NUL");
			while (1){
				segundos++;
				
				if(segundos==60)  {
					segundos=0;
					minutos++;
					if(minutos==60) {
						minutos=0;
						horas++;
						
					}		
			}
			system("cls");
			printf("\n\n\n\t\t\t[ %.2d: %.2d: %.2d]", horas,minutos,segundos);
		
		}
		
	}
			
	
		
		
			break;
		case 4:
	
		int main();{
			fstream archivo("Contacto y datos.txt");
			string nombresodatos;
			int a;
			int b;
			
			do
 {
 	cout<<"\nBienvenido a Contactos y datos ";
	cout<<"\n";
	cout<<"Presiona 1 Para escribir un contacto o datos: ";
	cin>>a;
	cin.ignore();
	
	if(a == 1)
	{
		if(!archivo.is_open());
		{
			archivo.open("Contacto y datos", ios::out);
			
		}
		cout<<"nombres_o_datos: ";
		getline(cin,nombresodatos); 
		cout<<"presina 1 Para guardar el contacto y datos: \n\npresiona 2 Para Salir: ";
		cin>>b;
		//para ver el Archivo de notas ir al escritorio del pc
		
		if(b == 1)	
		{
			archivo<<"Archivo de Notas"<<nombresodatos<<endl;
			system("cls");
		
			
			cout<<"Archivo de Notas guardado.....\n";
			system("pause");
			system("cls");
			
		 }
		 archivo.close();	
	  }
   }while(a != 1);
   
   return 0;


}
		
			
			break;
		case 5:
			
		cout<<"\nAdios gracias!"<<endl;
	
 
	

		
  			break;
		
	
	
}
		
		
		return 0;	
		
	}
	
	
	
