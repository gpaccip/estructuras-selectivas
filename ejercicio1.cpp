//ejercicio1.cpp
//Pacci Pérez Giorgini Disalvatore

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	double a,b,c;
	cout<<"\nENCONTRANDO EL NUMERO MAYOR"<<endl;
	cout<<"ingrese numeros diferentes: \n";
	cout<<"Digite un numero para a,b,c: ";cin>>a>>b>>c;
	
	if ((b!=c)&&(a!=b)&&(a!=c)){	
		if((a>b)&&(a>c)){
			cout<<"a es el numero mayor"<<endl;
			}
		else if((b>a)&&(b>c)){
			cout<<"b es el numero mayor"<<endl;
			}
		else{
		cout<<"c es el numero mayor"<<endl;
		}
	}
	else {
		cout<<"No pueden ser numeros iguales"<<endl;
	}
	
	system("pause");
 	return 0;
}
