//ejercicio1.cpp
//Pacci Pérez Giorgini Disalvatore

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	double a,b,c;
	cout<<"\tENCONTRANDO EL MAYOR VALOR"<<endl;
	cout<<"Ingrese valores diferentes \n";
	cout<<"Digite tres numeros: "<<endl;cin>>a>>b>>c;
	
	if ((b!=c)&&(a!=b)||(a!=c)){	
		if((a>b)&&(a>c)){
			cout<<a<<" es el mayor valor"<<endl;
			}
		else if((b>a)&&(b>c)){
			cout<<b<<" es el mayor valor"<<endl;
			}
		else{
		cout<<c<<" es el mayor valor"<<endl;
		}
	}
	else {
		cout<<"Todos los numeros no deben ser iguales"<<endl;
	}
	
	system("pause");
 	return 0;
}
