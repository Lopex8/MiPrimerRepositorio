#include<iostream>
using namespace std;
int main(){
	int solicitud();
	int add(int, int);
	int mul(int,int);
	int div(int,int);
	int res(int, int);
	int contador;
	cout<<"suma:1"<<endl<<"multiplicacion:2"<<endl<<"resta:3"<<endl<<"division:4"<<endl;	
	cout<<"ingrese una opcion: "<<endl;
    cin>> contador;

	switch(contador){
		case 1: cout<<"tu suma es: "<< add(solicitud(),solicitud()); break;
		case 2: cout<<"tu multiplicacion es "<< mul(solicitud(),solicitud()); break;
		case 3: cout<<"tu resta es: "<< res(solicitud(),solicitud());break;
		case 4: cout<<"tu division es: "<< div(solicitud(),solicitud());break;
		default: cout<<"ingrese uno de lo valores anteriormente mencionados."; break;
	}

}
int solicitud(){
	int a;
	cout<<"ingrese un numero: ";
	cin>> a;
	return a;
}
int add(int a, int b){
	return a+b;
}
int mul(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}
int res(int a, int b){
	return a-b;
}
