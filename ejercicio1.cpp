//ejercicio1.cpp
//Pacci Pérez Giorgini Disalvatore

#include<iostream>

using namespace std;

int main(){
	
	double a,b,c;
	
	cout<<"ingrese numeros diferentes: \n";
	cout<<"Digite un numero a: ";cin>>a;
	cout<<"Digite un numero b: ";cin>>b;
	cout<<"Digite un numero c: ";cin>>c;
	
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
		cout<<"no pueden ser numeros iguales"<<endl;
	}

 return 0;
}
