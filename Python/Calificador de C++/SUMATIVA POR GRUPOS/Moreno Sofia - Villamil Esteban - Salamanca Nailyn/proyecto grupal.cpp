#include <iostream>
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		int a,j4 =0;
		ofstream productos;
		ofstream ganancias;
		ofstream ventas;
		ofstream surtir;
		string b,c,d,e,f,g,h,i,j,k,l,m,n,o;
 char a2 = 205 ;
    char a3 = 186 ;
while(j4==0){

	cout<<"\n    ""                                  BIENVENIDO                       " ;
	cout<<"\n    "<<a3<<"para registrar un producto marque 1                          "<< a3;
	cout<<"\n    "<<a3<<"para registrar las ganancias diarias presione 2              "<< a3;
	cout<<"\n    "<<a3<<"para registrar la cantidad de productos vendidos presione 3  "<< a3;
	cout<<"\n    "<<a3<<"para registrar la cantidad de productos surtidos marque 4    "<< a3;
	cout<<"\n    "<<a3<<"para cerrar el programa presione  5                          "<< a3;
	cout<<"\n    "<<a3<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a2<<a3;
	cin>>a;
	switch(a){
		case 1:
		 productos.open("productos.txt");
		 
		cout<<" ingrese el nombre del producto"<<endl;
		cin>>b;
		cout<<"valor del producto"<<endl;
		cin>>c;
		productos <<"producto: "<<b<<"\n"<<"precio: "<<c<<endl;
		productos.close();
	break;
	case 2:
		ganancias.open("ganancias.txt");
		cout<<"ingrese la fecha y las canancias del dia"<<endl;
		cout<<"dia: ";
		cin>>d;
		cout<<"mes: ";
		cin>>e;
		cout<<"año: ";
		cin>>f;
		cout<<"ganancias :";
		cin>>g;
		ganancias <<"dia :"<<d<<" mes: "<<e<<" año: "<<f<<endl;
		ganancias <<"ganancias :"<<g;
		ganancias.close();
		break;
	case 3:
			ventas.open("ventas.txt");
		cout<<"ingrese la cantidad de productos vendidos"<<endl;
			cout<<"peras:  ";
		cin>>h;
		cout<<"carnes:  ";
		cin>>i;
		cout<<"gaseosas: ";
		cin>>j;
		cout<<"manzanas";
		cin>>k;
		ventas <<"gaseosas: "<<j<<"\n"<<"peras:  "<<h<<"\n"<<"carnes:  "<<i<<"\n"<<"manzanas :"<<k<<"\n"<<endl;
		ventas.close();
		break;
	case 4:
		surtir.open("surtir.txt");
		cout<<"ingrese la cantidad de productos surtidos"<<endl;
		cout<<"dia:  ";
		cin>>l;
		cout<<"mes:  ";
		cin>>m;
		cout<<"producto: ";
		cin>>n;
		cout<<"cantidad: ";
		cin>>o;
		surtir <<"dia: "<<l<<"\n"<<"mes:  "<<m<<"\n"<<"producto:  "<<n<<"\n"<<"cantidad :"<<o<<"\n"<<endl;
		surtir.close();
		break;
	case 5:
	j4=1;
	break;


}
	}



	
	
	
	return 0;
}
