//ejercicio1.cpp
//Pacci Pérez Giorgini Disalvatore

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	double a,b,c,d;
	cout<<"\tENCONTRANDO EL MAYOR VALOR"<<endl;
	cout<<"Digite valores diferentes \n";
	cout<<"Ingrese los cuatro numeros: "<<endl;cin>>a>>b>>c>>d;
	
	if ((b!=c)||(a!=b)||(a!=c)||(a!=d)||(b!=d)||(c!=d)){	
		if((a>b)&&(a>c)&&(a>d)){
			cout<<endl<<a<<" es el mayor valor"<<endl;
			}
		else if((b>a)&&(b>c)&&(b>d)){
			cout<<endl<<b<<" es el mayor valor"<<endl;
			}
		else if((c>a)&&(c>b)&&(c>d)){
			cout<<endl<<c<<" es el mayor valor"<<endl;
		}
		else {
			cout<<endl<<d<<" es el mayor valor"<<endl;
		}
	}
	else {
	
		cout<<endl;
		cout<<a<<" es el mayor valor pero los numeros no deben ser iguales"<<endl;
	}
	
	system("pause");
 	return 0;
}
