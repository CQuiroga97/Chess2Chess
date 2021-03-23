#include <iostream>
#include <math.h>
#include <fstream>
#include <ctime>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
using std::cout;
int main(int argc, char** argv) {
	  ofstream nubes;
	  char timeString[9];
	  string bebe;
      string palabrita;
      cout<<"Digite su nombre\n";
      cin>>palabrita;
      int z;
      ofstream pizza;
      char letrica = 205;
      char letrica2 = 186;
      int a = 0;
      int b = 0;
      int c = 0;
      
    while(c == 0){
    b = 0;
    cout<<"\n                              ";    
    while( b < 50 ){
    cout<<letrica;
    b = b + 1;

    }
       b=0;
          cout<<"\n                              "<<letrica2<<"            BIENVENIDO "<<palabrita<<"                     "<<letrica2;
          cout<<"\n                              "<<letrica2<<"      Seleccione una opcion:                    "<<letrica2;
          cout<<"\n                              "<<letrica2<<"      1.Calculadora                             "<<letrica2;
          cout<<"\n                              "<<letrica2<<"      2.Calendario                              "<<letrica2;
          cout<<"\n                              "<<letrica2<<"      3.Notas                                   "<<letrica2;
          cout<<"\n                              "<<letrica2<<"      4.Reloj                                   "<<letrica2;
          cout<<"\n                              "<<letrica2<<"      5.Salir                                   "<<letrica2;
          cout<<"\n                              ";
   while(b<50){
   cout<<letrica;
   b = b + 1;
   }
   cout<<"\n";
   cin>>a;

    switch(a){
    case 1:
    int a;
    cout<<"Bienvenido!\n Para sumar presione el numero 1";
    cout<<"\n Para restar presione el numero 2";
    cout<<"\n Para multiplicar presione el numero 3";
    cout<<"\n Para dividir presione el numero 4";
    cout<<"\n Para buscar la raiz presione el numero 5";
    cout<<"\n Para buscar el numero factorial presione el numero 6\n";
    cin>>z;
       
       switch(z){
           case 1:
             int b2;
             int a2;
             cout<<"ingrese el primer numero:";
             cin>>a2;
             cout<<"ingrese el segundo numero:";
             cin>>b2;
             cout<<a2+b2;
             break;
             
           case 2:
             int c;
             int d;
             cout<<"ingrese el primer numero:";
             cin>>c;
             cout<<"ingrese el segundo numero:";
             cin>>d;
             cout<<c-d;
             break;
             
           case 3:
             int e;
             int f;
             cout<<"ingrese el primer numero:";
             cin>>f;
             cout<<"ingrese el segundo numero:";
             cin>>e;
             cout<<f*e;
             break;
             
            case 4:
             int h;
             int i;
             cout<<"ingrese el primer numero:";
             cin>>h;
             cout<<"ingrese el segundo numero:";
             cin>>i;
             if(i==0){cout<<"no se puede dividir entre cero";
             }else{
             cout<<h/i;
             }
             break;
             
            case 5:
             int o;
             cout<<"ingrese el numero al que quiera sacar raiz\n";
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
             cout<<"el factorial es: \n" << res<<endl;
              }
             break;
            }
             break;
    case 2:
            while(c == 0){
            b = 0;
            cout<<"                                   ";    
            while( b < 32 ){
            cout<<letrica;
            b = b + 1;

            }
            b=0;
            cout<<"\n                                   "<<letrica2<<"           ABRIL              "<<letrica2;
            cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
            cout<<"\n                                   "<<letrica2<<"              1   2   3   4   "<<letrica2;
            cout<<"\n                                   "<<letrica2<<"  5   6   7   8   9   10  11  "<<letrica2;
            cout<<"\n                                   "<<letrica2<<"  12  13  14  15  16  17  18  "<<letrica2;
            cout<<"\n                                   "<<letrica2<<"  19  20  21  22  23  24  25  "<<letrica2;
            cout<<"\n                                   "<<letrica2<<"  26  27  28  29  30          "<<letrica2;
            cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
            cout<<"\n                                   ";
            while(b<32){
            cout<<letrica;
            b = b + 1;
            }
   
           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
  }
           b=0;
           cout<<"\n                                   "<<letrica2<<"           MAYO               "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                      1   2   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  3   4   5   6   7   8   9   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  10  11  12  13  14  15  16  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  17  18  19  20  21  22  23  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  24  25  26  27  28  29  30  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  31                          "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
           }
           

           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
           }
           b=0;
           cout<<"\n                                   "<<letrica2<<"           JUNIO              "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"      1   2   3   4   5   6   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  7   8   9   10  11  12  13  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  14  15  16  17  18  19  20  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  21  22  23  24  25  26  27  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  28  29  30                  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
           }
           
           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
           }
           b=0;
           cout<<"\n                                   "<<letrica2<<"           JULIO              "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"              1   2   3   4   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  5   6   7   8   9   10  11  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  12  13  14  15  16  17  18  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  19  20  21  22  23  24  25  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  26  27  28  29  30  31      "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
           }
           
           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
           }
           b=0;
           cout<<"\n                                   "<<letrica2<<"           AGOSTO             "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                          1   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  2   3   4   5   6   7   8   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  9   10  11  12  13  14  15  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  16  17  18  19  20  21  22  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  23  24  25  26  27  28  29  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  30  31                      "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
           }
           
           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
           }
           b=0;
           cout<<"\n                                   "<<letrica2<<"          SEPTIEMBRE          "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"          1   2   3   4   5   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  6   7   8   9   10  11  12  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  13  14  15  16  17  18  19  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  20  21  22  23  24  25  26  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  27  28  29  30              "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
          }
         
           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
           }
           b=0;
           cout<<"\n                                   "<<letrica2<<"           OCTUBRE            "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                  1   2   3   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  4   5   6   7   8   9   10  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  11  12  13  14  15  16  17  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  18  19  20  21  22  23  24  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  25  26  27  28  29  30  31  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
           }
           
           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
           }
           b=0;
           cout<<"\n                                   "<<letrica2<<"          NOVIEMBRE           "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  1   2   3   4   5   6   7   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  8   9   10  11  12  13  14  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  15  16  17  18  19  20  21  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  22  23  24  25  26  27  28  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  29  30                      "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
           }
           
           while( b < 32 ){
           cout<<"                                     ";
           b = b + 1;
           }
           b=0;
           cout<<"\n                                   "<<letrica2<<"          DICIEMBRE           "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  D   L   M   M   J   V   S   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"          1   2   3   4   5   "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  6   7   8   9   10  11  12  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  13  14  15  16  17  18  19  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  20  21  22  23  24  25  26  "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"  27  28  29  30  31          "<<letrica2;
           cout<<"\n                                   "<<letrica2<<"                              "<<letrica2;
           cout<<"\n                                   ";
           while(b<32){
           cout<<letrica;
           b = b + 1;
           }
           {
          break;
          
          case 3:
	        cout<<"BIENVENIDO A SU BLOC DE NOTAS \n";
	        cin>>bebe;
	        nubes.open("TEFA.txt");
	        nubes<<"BLOC 1:\n"<<bebe;
	        nubes.close();
          break;
          
          case 4:
            time_t current_time;
            struct tm * time_info;
            cout <<"hora(horas/minutos/segundos): ";
            time(&current_time);
            time_info = localtime(&current_time);
            strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);
            puts(timeString);
          break;
          
          case 5:
          	 cout<<"\nGracias, Adios!!";
             c=1;
       
          break;
        }
    }
        }
}
}
       
