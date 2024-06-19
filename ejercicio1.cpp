//ejercicio1.cpp
//Pacci Pérez Giorgini Disalvatore

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	double a,b,c;
	cout<<"\tENCONTRANDO EL NUMERO MAYOR"<<endl;
	cout<<"Ingrese numeros diferentes: \n";
	cout<<"Digite tres numeros: "<<endl;
	cin>>a>>b>>c;
	
	if ((b!=c)&&(a!=b)&&(a!=c)){	
		if((a>b)&&(a>c)){
			cout<<a<<" es el numero mayor"<<endl;
			}
		else if((b>a)&&(b>c)){
			cout<<b<<" es el numero mayor"<<endl;
			}
		else{
		cout<<c<<" es el numero mayor"<<endl;
		}
	}
	else {
		cout<<"No pueden ser numeros iguales"<<endl;
	}
	
	system("pause");
 	return 0;
}
